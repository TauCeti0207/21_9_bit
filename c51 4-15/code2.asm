		ORG 0000H
		LJMP MAIN
		ORG 0040H
MAIN: 	
;假设(31H)=37H,(32H)=38H
;实现(42H)= 78

		; 操作31H
		MOV 31H, #37H ;赋初值37H,38H
		MOV 32H, #38H
		MOV A, 31H;
		SWAP A; 交换，-->73H
		ANL A, #0F0H; 73H-->70H
		MOV 42H, A; 放到42H里面
		
		; 操作32H
		MOV A, 32H  ; 
		ANL A, #0FH; -->08H
		ORL 42H, A ; 70|08 -->(42H)=78H
		END