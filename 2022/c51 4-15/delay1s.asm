		ORG 0000H
		LJMP MAIN
		ORG 0040H
MAIN: 	MOV A, #7FH
LOOP: 	MOV P1, A
		RR A
		LCALL DELAY
		SJMP LOOP
		
		; 延时 1+1+1+((2*249+2)*199+2)*10+2 = 995025指令周期 
DELAY:	MOV R7, #10	;1机器周期 
DL1:	MOV R6, #199
DL2:	MOV R5, #249	;1		   
	  	DJNZ R5, $	    ;2  while(R5)   R5--
		DJNZ R6, DL2	;2
	 	DJNZ R7, DL1	;2  IF(R7!=0)  LJMP:WAIT
	    RET             ;2
		END