INCLUDE Irvine32.inc
         

.DATA      
          sir1      DB   100 DUP(7)
          sir2      DB   100 DUP(?)
          
          .CODE   
          main proc
                    mov  esi,OFFSET sir1
                    mov  edi,OFFSET sir2
                    mov  ecx,LENGTHOF sir1
          muta:     mov  al,[esi]
                    mov  [edi],al
                    inc  esi
                    inc  edi
                    loop muta
          


                   exit
main ENDP
		END main


