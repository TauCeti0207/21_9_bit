		ORG 0000H
		LJMP MAIN
		ORG 0040H
MAIN: 	
		;实现(30H)= 78H  (40H) = 37H  (41H) = 38H
		MOV A, 30H;30H里面是78H
		ANL A, #0FH; 高四位置为0，低四位不变 08H
		ORL A, #30H; -->38H
		MOV 41H, A; 放到41H里面
		
		MOV A, 30H  ; 
		SWAP A; A中内容高低字节互换 87H
		ANL A, #0FH; -->07H
		ORL A, #30H; -->37H
		MOV 40H, A; 送入40H中
		
		END