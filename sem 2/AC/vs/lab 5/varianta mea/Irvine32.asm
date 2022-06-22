INCLUDE Irvine32.inc

;Sa se scrie un macro care primeşte trei adrese de memorie A1, A2, A3, concateneaza sirurile de caractere
;incepind de la adresele A1 si A2 in aceasta ordine, depunind rezultatul la adresa A3. 
;blancurile să fie înlocuite cu ‚@’.Afișati  pe ecran toate șirurile.
.data
str1Mes db "Str1: ",0
str2Mes db "Str2: ",0
resultMes db "Result: ",0
str1MaxLen = 100
str2MaxLen = 100
str1 byte str1MaxLen+1 DUP(?)
str2 byte str2MaxLen+1 DUP(?)
str3 byte str1MaxLen+str2MaxLen+1 DUP(?)
str1Len dd ?
str2Len dd ?
str3Len dd ?
concat MACRO src1, src2, dest, src1Len, src2Len
cld
mov esi, offset src1
mov edi, offset dest
mov ecx, src1Len
rep movsb
mov esi, offset src2
mov edi, offset dest
add edi, src1Len
mov ecx, src2Len
rep movsb
replaceChar dest
ENDM
replaceChar MACRO str
LOCAL nextChar, nd
mov edi, offset str
dec edi
nextChar:
inc edi
mov ebx, [edi]
cmp bl, 0
je nd
cmp bl, 32 ; 32 = ' '
jne nextChar
mov ebx, 0
mov bl, 64 ; 64 = '@'
mov [edi], bl
jmp nextChar
nd:
ENDM
inputValues MACRO
mov edx, offset str1Mes
call WriteString
mov edx, offset str1
mov ecx, str1MaxLen
call ReadString
mov str1Len, eax
mov edx, offset str2Mes
call WriteString
mov edx, offset str2
mov ecx, str2MaxLen
call ReadString
mov str2Len, eax
add eax, str1Len
mov str3Len, eax
ENDM
outputResults MACRO
mov al, 10
call WriteChar
mov edx, offset resultMes
call WriteString
mov edx, offset str3
call WriteString
mov al, 10
call WriteChar
ENDM
.code
main proc
inputValues
concat str1, str2, str3, str1Len, str2Len
outputResults
exit
main end
end main
