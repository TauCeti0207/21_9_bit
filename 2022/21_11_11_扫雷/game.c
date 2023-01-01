#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
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

//棋盘的打印
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	//1-9开始
	int i = 0;
	//打印列号
	for (i = 0; i <= col; i++) //i从0开始,避免列号错位
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//布置10个雷
	while (count)
	{
		//随机产生的x y坐标是1-9
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//无需写到头文件,因为不想暴露它 +static保护更加彻底 只能在game.c用
static int get_mine_count(char mine[ROWS][COLS], int x, int y) 
{
	//mine里放的是字符 需要减去'0'
	return mine[x - 1][y] + mine[x - 1][y - 1]
		+ mine[x][y - 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1]
		+ mine[x][y + 1] + mine[x - 1][y + 1]
		- 8 * '0';
	//因为设计时11*11 所以x+1 y+1不会越界
}

//递归展开一片雷
void Open_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (get_mine_count(mine, x, y) == 0)
	{
		show[x][y] = ' ';
		//判断坐标是否越界以及雷是否已经被排除
		if (show[x - 1][y - 1] == '*')
			Open_Mine(mine, show, x - 1, y - 1);
		if (show[x - 1][y] == '*')
			Open_Mine(mine, show, x - 1, y);
		if (show[x - 1][y + 1] == '*')
			Open_Mine(mine, show, x - 1, y + 1);
		if (show[x][y - 1] == '*')
			Open_Mine(mine, show, x, y - 1);
		if (show[x][y + 1] == '*')
			Open_Mine(mine, show, x, y + 1);
		if (show[x + 1][y - 1] == '*')
			Open_Mine(mine, show, x + 1, y - 1);
		if (show[x + 1][y] == '*')
			Open_Mine(mine, show, x + 1, y);
		if (show[x + 1][y + 1] == '*')
			Open_Mine(mine, show, x + 1, y + 1);
	}
	else
	{
		show[x][y] = get_mine_count(mine, x, y) + '0';
	}
}

//遍历show,以便判断是否排雷完毕
int Travel(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				win++;
			}
		}
	}
	return win;
}


//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{
		printf("请输入要排查的雷的坐标:>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//坐标合法性排查
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//计算x y坐标周围有几个雷
				//show 里面放的是字符 数字3 + '0' 就变成'3'
				//字符'0' 48  '2' -> 50 = '0' + 2
				Open_Mine(mine, show, x, y);
				DisplayBoard(show, row, col);
				
			}
		}
		else
		{
			printf("输入坐标非法,请重新输入\n");
		}
		win = Travel(show, row, col);
		if (win == EASY_COUNT)
			break;
	}
	//EASY_COUNT 设置小一点方便检验是否排雷成功
	if (win == EASY_COUNT)
	{
		printf("恭喜你,排雷成功\n");
		//将EASY_COUNT 
		DisplayBoard(mine, row, col);
	}
}