#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<stdlib.h>
#include"game.h"	
//���Լ���ͷ�ļ���""
void game1()
{
	char ret;
	//������ ��Һ͵����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ϣ��ȫ���ǿո�	0��Ȼ�ǲ��ɴ�ӡ�ַ� ���վ����ǿո�
	//��ʼ������,֮��Ͳ��ù�ע�ʼ������ɶ
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��");
	}
}
void menu1()
{
	printf("****************************\n");
	printf("*******1.play 0.exit********\n");
	printf("****************************\n");

}
void test1()
{
	int input = 0;
	srand((unsigned int)time(NULL));	
	//srandֻ�����һ��
	//timeǿ��ת�����޷���int
		//time ������long��
	do
	{
		menu1();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game1();
			//printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����������!\n");
			break;
		}
	} while (input);
}
int main()	//������
{
	test1();
	return 0;
}