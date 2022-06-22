INCLUDE Irvine32.inc
.data
mes1 byte "Introduceti valoarea X:",0
mes2 byte "Introduceti valoarea Y:",0
mes3 byte "Rezutatul este:",0
vrx dword 0
vry dword 0
rez dd 0
.code
main PROC
mov edx,OFFSET mes1
call WriteString ; afisarea mes1
call ReadDec ; introducerea de la tastatura
mov vrx,eax ; salvarea valorii in variabila vrx
mov edx,OFFSET mes2
call WriteString ; afisarea mes2
call ReadDec ; introducerea de la tastatura
mov vry,eax ; salvarea valorii in variabila vry
;controlam conditiile
     
    mov eax, vry
	test eax, 1
	jz con   
    jmp   con1    

con: mov eax,vry ;realizam expresia 2(y-111)
sub eax,111
mov bx,2
mul bx
cwd

mov rez,eax
jmp ex ; salt neconditionat la ex
con1: mov eax,vrx ; realizam expresia X/4-53+Y
mov bx,4
div bx
cwd
mov bx,53
sub bx
add eax,vry
mov rez,eax
ex: mov edx,OFFSET mes3
call WriteString ; afisarea mesajului mes3 
call WriteInt ; afisarea rezultatului cu semn
call Crlf ; din rand nou
exit
main ENDP
END main