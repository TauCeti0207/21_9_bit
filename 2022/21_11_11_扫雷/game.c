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

//���̵Ĵ�ӡ
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	//1-9��ʼ
	int i = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++) //i��0��ʼ,�����кŴ�λ
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//����10����
	while (count)
	{
		//���������x y������1-9
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//����д��ͷ�ļ�,��Ϊ���뱩¶�� +static�������ӳ��� ֻ����game.c��
static int get_mine_count(char mine[ROWS][COLS], int x, int y) 
{
	//mine��ŵ����ַ� ��Ҫ��ȥ'0'
	return mine[x - 1][y] + mine[x - 1][y - 1]
		+ mine[x][y - 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1]
		+ mine[x][y + 1] + mine[x - 1][y + 1]
		- 8 * '0';
	//��Ϊ���ʱ11*11 ����x+1 y+1����Խ��
}

//�ݹ�չ��һƬ��
void Open_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (get_mine_count(mine, x, y) == 0)
	{
		show[x][y] = ' ';
		//�ж������Ƿ�Խ���Լ����Ƿ��Ѿ����ų�
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

//����show,�Ա��ж��Ƿ��������
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


//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{
		printf("������Ҫ�Ų���׵�����:>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//����Ϸ����Ų�
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�,�㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//����x y������Χ�м�����
				//show ����ŵ����ַ� ����3 + '0' �ͱ��'3'
				//�ַ�'0' 48  '2' -> 50 = '0' + 2
				Open_Mine(mine, show, x, y);
				DisplayBoard(show, row, col);
				
			}
		}
		else
		{
			printf("��������Ƿ�,����������\n");
		}
		win = Travel(show, row, col);
		if (win == EASY_COUNT)
			break;
	}
	//EASY_COUNT ����Сһ�㷽������Ƿ����׳ɹ�
	if (win == EASY_COUNT)
	{
		printf("��ϲ��,���׳ɹ�\n");
		//��EASY_COUNT 
		DisplayBoard(mine, row, col);
	}
}