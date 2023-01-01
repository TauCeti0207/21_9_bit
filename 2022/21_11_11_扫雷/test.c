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
	//创建数组
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息

	//初始化mine数组-全字符'0'
	InitBoard(mine,ROWS,COLS,'0');
	//初始化show数组-全字符'*'
	InitBoard(show,ROWS,COLS,'*');

	//打印棋盘,只需打印9x9就行了
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//排雷
	FindMine(mine, show, ROW, COL);

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//扫雷
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}

