#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("�������\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("��Ҫ����Ŭ���ô���\n");
//		//printf("%d\n", line);
//	}
//	if (line > 20000)
//		printf("��ϲ���ҵ���offer\n");
//	else
//	{
//		printf("��򻹲���\n");
//	}
//	return 0;
//}

//��2�������ĺ�
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int Add(int x, int y) 
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	//scanf �и�ʽ����ôд��,�ͱ�����ô����
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ���������飬����10��Ԫ��
//	//���ַ� - �ַ�����
//	char ch1[3] = { 'a','b','c' };
//	char ch2[6] = "hello";
//	//hello ���滹��һ��'\0'
//	//��ó�ʼ��
//	int arr1[10];
//	printf("%d\n", arr1[0]);
//	//vs2019 ����δ��ʼ�� ���ᱨ��
//	
//	//����ȫ��ʼ��
//	//int arr[10] ={ 0 };
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i<=9)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
////}
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//	return 0;
//}
//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	printf("������2��ֵ:>\n");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("�ϴ�ֵΪ%d\n", Max(a, b));
//	return 0;
//}

//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	printf("������2��ֵ:>\n");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("�ϴ�ֵΪ%d\n", Max(a, b));
//	return 0;
//}
#include<stdio.h>
int main()
{
    int a = 40;
    int c = 212;
    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
    return 0;
}