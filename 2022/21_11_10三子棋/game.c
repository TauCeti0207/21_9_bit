#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//版本1 代码被写死了 如果ROW COL改了 打印还是3列
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		//数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][0], board[i][1]);
//		//分隔行
//		if(i < row - 1)
//			printf("---|---|---\n");
//	}
//}


//版本2
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//数据 把  %c |看成一组数据,但最后一个|不打印
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j < col -1)//最后一个|不用打印
				printf("|");
		}
		printf("\n"); //打印完一行换行
		//分隔行 把---|看成一组数据 最后一个|不打印 
		if (i < row - 1)//最后一行分隔行也无需打印
		{
			for (j = 0; j < col; j++)
			{
					printf("---");
					if (j < col - 1)
						printf("|");
			}
		}
		printf("\n"); //打印完一行换行
	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋:>");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//坐标合法性判断
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用,请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法,请重新输入\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋:>\n");
	x = rand() % ROW;//0 - 2
	y = rand() % COL;//0 - 2
	while (1)
	{
		x = rand() % ROW;//0 - 2
		y = rand() % COL;//0 - 2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int is_full(char board[ROW][COL],int row,int col )
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//版本1 is_win被写死了,只能判断ROW COL为3的情况
//char is_win(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//三行判断
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	//三列判断
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//		{
//			return board[1][i];
//		}
//	}
//	//判断对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	//判断平局
//	if (1 == is_full(board, row, col))
//	{
//		return 'Q';
//	}
//	//游戏继续
//	return 'C';
//}


//版本2 is_win灵活变动
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int a = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		a = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == '*')
			{
				a++;
			}
			if (board[i][j] == board[i][j + 1] && board[i][j] == '#')
			{
				a--;
			}
			if (a == col - 1)
			{
				return '*';
			}
			if (a == -col + 1)
			{
				return '#';
			}
		}
	}

	//判断列
	for (i = 0; i < col; i++)
	{
		a = 0;//a需要清零
		for (j = 0; j < row - 1; j++)
		{
			if (board[j][i] == board[j + 1][i] && board[j][i] == '*')
			{
				a++;
			}
			if (board[j][i] == board[j + 1][i] && board[j][i] == '#')
			{
				a--;
			}
			if (a == row - 1)
			{
				return '*';
			}
			if (a == -row + 1)
			{
				return '#';
			}
		}
	}

	//判断左对角线
	for (i = 0, j = 0; i < row - 1; i++, j++)
	{
		if (board[i][j] == board[i + 1][j + 1] && board[i][j] == '*')
		{
			a++;
		}
		if (board[i][j] == board[i + 1][j + 1] && board[i][j] == '#')
		{
			a--;
		}
		if (a == row - 1)
		{
			return '*';
		}
		if (a == -row + 1)
		{
			return '#';
		}
	}

	//判断右对角线
	for (i = 0, j = col - 1; i < row - 1; i++, j--)
	{
		if (board[i][j] == board[i + 1][j - 1] && board[i][j] == '*')
		{
			a++;
		}
		if (board[i][j] == board[i + 1][j - 1] && board[i][j] == '#')
		{
			a--;
		}
		if (a == row - 1)
		{
			return '*';
		}
		if (a == -row + 1)
		{
			return '#';
		}
	}

	//判断平局
	if (1 == is_full(board, row, col))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}