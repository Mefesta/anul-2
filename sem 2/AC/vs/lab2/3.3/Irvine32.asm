INCLUDE Irvine32.inc
; Sa se calculeze expresia aritmetica: . z=(a+b+c+1) *(a+b+c+1) /((a-b+d)*(a-b+d))
.data

 a dw 5
b dw 6
cd dw 10
d dw 9
interm dw ?
interm1 dw ?
rez db ?
.code
 main proc
mov eax, 0
mov ax, a
add ax,b ; in ax avem a+b
add ax, cd ; ax=a+b+c
add ax, 1 ; ax=a+b+c+1
mov interm, ax; interm=(a+b+c+1)
imul ax, ax
mov interm, ax; interm=(a+b+c+1)*(a+b+c+1)


mov eax, 0
mov ax, a
sub ax,b ; in ax avem a-b
add ax, d ; ax=a-b+d
mov interm1, ax; interm=(a-b+d)
imul ax, ax
mov interm1, ax; interm=(a-b+d)

xchg interm1, ax
xchg ax, interm
cwd
div interm



mov rez, al
call WriteInt
call Crlf
exit
main ENDP
END 