		ORG 0000H
		LJMP MAIN
		ORG 0040H
MAIN: 	
		;ʵ��(30H)= 78H  (40H) = 37H  (41H) = 38H
		MOV A, 30H;30H������78H
		ANL A, #0FH; ����λ��Ϊ0������λ���� 08H
		ORL A, #30H; -->38H
		MOV 41H, A; �ŵ�41H����
		
		MOV A, 30H  ; 
		SWAP A; A�����ݸߵ��ֽڻ��� 87H
		ANL A, #0FH; -->07H
		ORL A, #30H; -->37H
		MOV 40H, A; ����40H��
		
		END