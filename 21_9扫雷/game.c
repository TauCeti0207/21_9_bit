
#include"game.h"

//��Ҫ��ӡ���ַ�����Ҳ������
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


//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----ɨ����Ϸ------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);

	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----ɨ����Ϸ------\n");

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
//����staticֻ��game.c������
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
	//1�����Ų������
	//2��������ǲ�����
		//1���� ��ը��
		//2������ ͳ����Χ�м�����--�洢�Ų��׵���Ϣ��show����,��Ϸ����
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASYCOUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�,�㱻ը����\n");
				DisplayBoard(mine,row,col);
				break;	//����while
			}
			else
			{
				//������,ͳ����Χ�м�����
				int count=get_mine_count(mine, x, y);
				show[x][y] = count+'0';//�������ܱ���ַ�0 �ַ�1
				//0    '0' -48
				//1    '1' -49
				//���ֱ��ַ���48
				//��ʾ�Ų������Ϣ
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�,����������:\n");
		}
	}
	if (win == row * col - EASYCOUNT)
	{
		printf("��ϲ��,���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}
