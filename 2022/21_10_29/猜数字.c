#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*********************************\n");
	printf("*********    1.play   ***********\n");
	printf("*********    0.exit   ***********\n");
	printf("*********************************\n");
}

void game()//猜数字小游戏
{
	int guess = 0;
	int count = 0;
	int r = rand() % 100 + 1;
	while (1)
	{
		printf("请输入猜的数字>:\n");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
			count++;
		}
		else if (guess > r)
		{
			printf("猜大了\n");
			count++;
		}
		else
		{
			count++;
			printf("恭喜你猜对了,总共猜了%d次\n", count);
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();//游戏菜单
		printf("请选择:>\n");
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
			printf("选择错误,请重新选择:>\n");
			break;
		}
	} while (input);
	return 0;
}