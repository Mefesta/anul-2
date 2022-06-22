INCLUDE Irvine32.inc

;Elaboraţi un program care transformă șirul de caractere începând de la adresa string în răsturnatul sau,
;numărul de elemente al șirului fiind cunoscut. Aceeași problemă pentru cazul 
;când nu se cunoaște numărul de caractere din şir, ci doar că acesta se termină cu un caracter special.

reverse MACRO a, b
LOCAL reverse
mov ecx, b        ;mutam variabila b in ecx
    dec ecx        ;scoate 1 di ecx
reverse:
    mov al, a[ecx]    ;punem valoarea ascii a caracterului in AL
    call WriteChar ;printam string
    sub ecx, 1    ;substragem 1
    jnc reverse
ENDM
.data
    string byte "gabriel", 0    ;stringul
    stringSize DD 0        ;dimensiuele
.code
main proc
    mov edx ,OFFSET string    ;mutam in edx
    call WriteString        ;printam string
        call Crlf            ;determinam o linie
    mov edx, OFFSET string    
    mov ecx, SIZEOF string    
    mov stringSize, eax
    mov esi, -1
    mov al, '@'                
fend:
    inc esi                ;increpentam
    cmp al, string[esi]        ;compara
    loopne fend            ;decremetam
    mov stringSize, esi        ;mutam
    call Crlf                ;determinam o linie
    reverse string, stringSize 
    call Crlf                ;determinam o linie
    call readchar            ;transferam caracterul
    exit                    
main ENDP
END main
