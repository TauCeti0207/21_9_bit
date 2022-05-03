		ORG 0000H
		LJMP MAIN
		ORG 0040H
MAIN: 	MOV A, #7FH
LOOP: 	MOV P1, A
		RR A
		LCALL DELAY
		SJMP LOOP
		
		; 延时100*100指令周期 100*100*(1+1+2+2)机器周期
DELAY:	MOV R7, #100	;1机器周期 外循环100次
WAIT:	MOV R6, #100	;1		   内循环100次
	  	DJNZ R6, $	    ;2  while(R6)   R6--
	 	DJNZ R7,WAIT	;2  IF(R7==0)  LJMP:WAIT
	    RET             ;2
		END