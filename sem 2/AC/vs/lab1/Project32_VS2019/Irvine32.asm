INCLUDE Irvine32.inc
.data
Promt DB 'Doresti sa devii programator?(da/nu)-[y/n]',0
Dad DB 13,10,'Vei deveni!',13,10,0
Nud DB 13,10,'Vei deveni filosof!',13,10,0
.code
main PROC
mov edx,OFFSET Promt
call WriteString
call ReadChar
cmp al,'y'
jz IsDad
cmp al,'n'
jz IsNud
IsDad: mov edx,OFFSET Dad
call WriteString
jmp ex
IsNud: mov edx,OFFSET Nud
call WriteString
ex:
exit
main ENDP
END main