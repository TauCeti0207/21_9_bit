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

void game()//������С��Ϸ
{
	int guess = 0;
	int count = 0;
	int r = rand() % 100 + 1;
	while (1)
	{
		printf("������µ�����>:\n");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("��С��\n");
			count++;
		}
		else if (guess > r)
		{
			printf("�´���\n");
			count++;
		}
		else
		{
			count++;
			printf("��ϲ��¶���,�ܹ�����%d��\n", count);
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();//��Ϸ�˵�
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��:>\n");
			break;
		}
	} while (input);
	return 0;
}