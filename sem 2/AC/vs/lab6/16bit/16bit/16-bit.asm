Include Irvine16.inc
 .model small
.code
main proc
start: mov ax,@data
mov ds,ax
	
	mov ah,00h ; instalam regimul video
	mov al,12h; rezolutia 640 x480
	int 10h ; apelarea BIOS
	
	mov ah,0ch ; functia – inregistrarea punctului grafic
	
	mov bh,0 ;pagina video (de baza 0 )
	mov cx,0 ; verticala
	mov dx,0 ; orizontala

col2:	mov al,4h ; rosu
	int 10h
	inc cx	; punctul urmator
	cmp cx,640
	jne col2
	inc dx ; linia urmatoare
	xor cx,cx
	cmp dx,480
	jne col2
	
	mov cx,0
	mov dx,160

col3:    mov al,0Fh ; alb
	int 10h
	inc cx	; punctul urmator
	cmp cx,640
	jne col3
	inc dx ; linia urmatoare
	xor cx,cx
	cmp dx,320
	jne col3

col4:    mov al,2h ; verde
	int 10h
	inc cx	; punctul urmator
	cmp cx,640
	jne col4
	inc dx ; linia urmatoare
	xor cx,cx
	cmp dx,160
	jne col4

	mov ah,1 ;  click (pauza)
	int 21h
	mov ax,03 ;   regim text
	int 10h
	
	
Exit
main ENDP	; finalul functiei main
END main	; finalizarea programei
