#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("*********1. play*********\n");
	printf("*********0. exit************\n");
	printf("****************************\n");

}

void game()
{
	//�׵���Ϣ�洢
	//��-1,����-0
	//2������
	//1�������Ų��úõ��׵���Ϣ
	//1���������Ų�����׵���Ϣ
	//�ַ�0���ַ�1
	//����Ҫ�࿪һ�� 9*9 Ӧ�ô���11*11 ���ܱ���Խ��

	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//��ӡһ������ ֻ��ӡ9*9
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);


	//�Ų���
	FindMine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

//�Ż�:
//1���û����,չ��һƬ-�ݹ�ʵ��
//2����׹���