#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("*****  1. play     ****\n");
	printf("*****  0. exit     ****\n");
	printf("***********************\n");
}

void game()
{
	//��������
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ�����Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ

	//��ʼ��mine����-ȫ�ַ�'0'
	InitBoard(mine,ROWS,COLS,'0');
	//��ʼ��show����-ȫ�ַ�'*'
	InitBoard(show,ROWS,COLS,'*');

	//��ӡ����,ֻ���ӡ9x9������
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//����
	FindMine(mine, show, ROW, COL);

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//ɨ��
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}

