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
	//雷的信息存储
	//雷-1,非雷-0
	//2个数组
	//1个数组存放布置好的雷的信息
	//1个数组存放排查出的雷的信息
	//字符0与字符1
	//数组要多开一层 9*9 应该创建11*11 才能避免越界

	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//打印一下棋盘 只打印9*9
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);


	//排查雷
	FindMine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

//优化:
//1如果没有雷,展开一片-递归实现
//2标记雷功能