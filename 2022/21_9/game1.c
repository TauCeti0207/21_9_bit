#define _CRT_SECURE_NO_WARNINGS

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

void DisplayBoard1(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1��ӡһ�е�����
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][0]);
		//2��ӡ�ָ���,���һ�в�Ҫ��ӡ
		if(i<row-1)
			printf("---|---|---\n");
		//�����Ƚϴ� �޷���ӡ���ж���
	}
}

//�Ż���:
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
	/*	   |   |   
		---|---|---  */			//һ��forѭ����ӡ������

		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1��ӡһ�е�����
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");	//��߽粻�÷ָ���
		}
		printf("\n");

		//2��ӡ�ָ���,���һ�в�Ҫ��ӡ
		if (i < row - 1)	//�ָ��б���������1
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");	//���߽粻�ô�|
			}
			printf("\n");

		}
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>\n");
		scanf("%d%d", &x, &y);
		//�ж�x y����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�����ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')	//�������˵ �±��Ǵ�1��ʼ��
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("���������Ƿ�,����������!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;	//��������϶��Ϸ�
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


//����1��ʾ��������
//����0��ʾ����û��
int IsFull(char board[ROW][COL], int row, int col)
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
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//������
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1]; //�����κ�һ������ ���Ӯ����*,����Ӯ����#
		}
	}

	//������
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i]; //�����κ�һ������ ���Ӯ����*,����Ӯ����#
		}
	}
	
	//2���Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';	//��Ϸû�� IsFull���ص���0 ��Ϸ����
	}
	else
	{
		return 'C';	//��Ϸ����
	}
}