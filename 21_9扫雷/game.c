
#include"game.h"

//把要打印的字符类型也传过来
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----扫雷游戏------\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);

	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----扫雷游戏------\n");

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//deploy 10 mines
	int count = EASYCOUNT;
	while (count)
	{
		//Generating random coordinates
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//judge whether to redeploy mines
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
//加上static只在game.c里面用
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';


}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1输入排查的坐标
	//2检查坐标是不是雷
		//1是雷 被炸死
		//2不是雷 统计周围有几个雷--存储排查雷的信息到show数组,游戏继续
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASYCOUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				DisplayBoard(mine,row,col);
				break;	//跳出while
			}
			else
			{
				//不是雷,统计周围有几个雷
				int count=get_mine_count(mine, x, y);
				show[x][y] = count+'0';//这样才能变成字符0 字符1
				//0    '0' -48
				//1    '1' -49
				//数字变字符＋48
				//显示排查出的信息
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法,请重新输入:\n");
		}
	}
	if (win == row * col - EASYCOUNT)
	{
		printf("恭喜你,排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}
