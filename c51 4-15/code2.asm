		ORG 0000H
		LJMP MAIN
		ORG 0040H
MAIN: 	
;����(31H)=37H,(32H)=38H
;ʵ��(42H)= 78

		; ����31H
		MOV 31H, #37H ;����ֵ37H,38H
		MOV 32H, #38H
		MOV A, 31H;
		SWAP A; ������-->73H
		ANL A, #0F0H; 73H-->70H
		MOV 42H, A; �ŵ�42H����
		
		; ����32H
		MOV A, 32H  ; 
		ANL A, #0FH; -->08H
		ORL 42H, A ; 70|08 -->(42H)=78H
		END