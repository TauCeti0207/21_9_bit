#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<stdlib.h>
#include"game.h"	
//引自己的头文件用""
void game1()
{
	char ret;
	//数组存放 玩家和电脑走出的棋盘信息
	char board[ROW][COL] = { 0 };//希望全部是空格	0虽然是不可打印字符 但终究不是空格
	//初始化棋盘,之后就不用关注最开始里面是啥
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局");
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
	//srand只需调用一次
	//time强制转换成无符号int
		//time 本质是long型
	do
	{
		menu1();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game1();
			//printf("三子棋\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新输入!\n");
			break;
		}
	} while (input);
}
int main()	//三子棋
{
	test1();
	return 0;
}