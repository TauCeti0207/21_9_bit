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

//�汾1 ���뱻д���� ���ROW COL���� ��ӡ����3��
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		//����
//		printf(" %c | %c | %c \n", board[i][0], board[i][0], board[i][1]);
//		//�ָ���
//		if(i < row - 1)
//			printf("---|---|---\n");
//	}
//}


//�汾2
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//���� ��  %c |����һ������,�����һ��|����ӡ
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j < col -1)//���һ��|���ô�ӡ
				printf("|");
		}
		printf("\n"); //��ӡ��һ�л���
		//�ָ��� ��---|����һ������ ���һ��|����ӡ 
		if (i < row - 1)//���һ�зָ���Ҳ�����ӡ
		{
			for (j = 0; j < col; j++)
			{
					printf("---");
					if (j < col - 1)
						printf("|");
			}
		}
		printf("\n"); //��ӡ��һ�л���
	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	printf("�������:>");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//����Ϸ����ж�
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��,����������\n");
			}
		}
		else
		{
			printf("����Ƿ�,����������\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������:>\n");
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
//�汾1 is_win��д����,ֻ���ж�ROW COLΪ3�����
//char is_win(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//�����ж�
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	//�����ж�
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//		{
//			return board[1][i];
//		}
//	}
//	//�ж϶Խ���
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	//�ж�ƽ��
//	if (1 == is_full(board, row, col))
//	{
//		return 'Q';
//	}
//	//��Ϸ����
//	return 'C';
//}


//�汾2 is_win���䶯
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int a = 0;
	//�ж���
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

	//�ж���
	for (i = 0; i < col; i++)
	{
		a = 0;//a��Ҫ����
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

	//�ж���Խ���
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

	//�ж��ҶԽ���
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

	//�ж�ƽ��
	if (1 == is_full(board, row, col))
	{
		return 'Q';
	}
	//��Ϸ����
	return 'C';
}