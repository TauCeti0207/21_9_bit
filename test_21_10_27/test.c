#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////getchar
////EOF
////ת�����巢��EOF����-1
////#define EOF    (-1)
//int main()
//{
//	//��ȡ���ַ�,Ϊʲô��int����?
//	//'a'-97,�ַ�������ASCII��ʾ
//	//getchar��ȡʧ��ʱ����EOF,��-1
//	//-1������,��Ҫ4�ֽڿռ���ܴ���
//	//���������char ch�Ͳ�������
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	printf("����������:>");
//	scanf("%d", input);//abcdef
//	printf("��ȷ������(Y/N):>");
//	int ch = getchar();
//	if (ch == getchar)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", input);//abcdef
//	getchar();//����\n
//	printf("��ȷ������(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", input);//abcdef
//	//getchar();//����\n
//	//��������
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;//�����
//	}
//	printf("��ȷ������(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//��ʼ��
//	while (i <= 10)//�ж�
//	{
//		printf("%d ", i);
//		i++;//��������
//	}
//	return 0;
//}
////�������,3�����ַ���,���׳���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	//for(i=1/*��ʼ��*/; i<=10/*�жϲ���*/; i++/*��������*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		i = 0;
//		printf("hehe");
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//ʹ��do while��ӡ1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}