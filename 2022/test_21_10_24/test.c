#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//4byte
//	//& ȡ��ַ������
//	//aռ4���ֽ�,ÿ���ֽڶ��б��
//	//ȡ��������ռ4���ֽڿռ�ĵ�һ���ֽڵĵ�ַ(��ַС���Ǹ��ֽ�)
//	printf("%p\n", &a);
//	//%p ��ַ�Ĵ�ӡ��ʽ
//	int* p = &a;
//	*p = 20;
//	//* �����ò�����,*pͨ��p�е�ֵ,�ҵ�p��ָ�Ķ���
//	//*��ʾp��ָ�����
//	//int ��ʾpָ��Ķ����������int����
//	//p���������ַ��,���԰�p��Ϊָ�����
//	printf("%p\n", p);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//ָ������Ĵ�Сȡ���ڵ�ַ�Ĵ�С
//32λƽ̨�µ�ַ��32��bitλ����4���ֽڣ�
//64λƽ̨�µ�ַ��64��bitλ����8���ֽڣ�
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//#include<string.h>
//struct Stu
//{
//	//�ṹ���Ա
//	char name[20];//����
//	int age;//����
//	char sex[10]; //�Ա�
//	//char id[15]; //ѧ��
//	//[]�ռ��С������ȷָ��
//	//....�����Լ������
//};
//int main()
//{
//	struct Stu zhangsan = { "����",30,"��" };
//	struct Stu lisi = { "����",24,"����" };
//	printf("%s %d %s\n", zhangsan.name, zhangsan.age, zhangsan.sex);
//	printf("%s %d %s\n", lisi.name, lisi.age, lisi.sex);
//	//.Ϊ�ṹ��Ա���ʲ�����
//	// 
//	//->������
//	//printf("%d\n", strlen("�й�"));
//	struct Stu* pl=&lisi;
//	printf("%s %d %s\n", (*pl).name, (*pl).age, (*pl).sex);
//	printf("%s %d %s\n", pl->name, pl->age, pl->sex);
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	/*if (age >= 18)
//	{
//		printf("����\n");
//	}*/
//	/*if (age >= 18)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("δ����");
//	}*/
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if(age>=18&&age<40)
//	{
//		printf("����\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 60 && age < 90)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("����");
//		printf("����̸����");
//	}
//	else
//	{
//		printf("δ����");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a = 0;
//int b = 2;
//if (a == 1)
//if (b == 2)
//printf("hehe\n");
//else
//printf("haha\n");
//return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//�ʵ���ʹ��{}����ʹ������߼����������
//���������Ҫ
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (5 == num) 
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ",i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
////switch������ʾ
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//	}
//	return 0;
//}
#include <stdio.h>

//switch������ʾ

//int main()
//
//{
//
//	int day = 0;
//
//	scanf("%d", &day);
//
//	switch (day)
//
//	{
//
//	case 1:
//
//	case 2:
//
//	case 3:
//
//	case 4:
//
//	case 5:
//
//		printf("weekday\n");
//
//		break;
//
//	case 6:
//
//	case 7:
//
//		printf("weekend\n");
//
//		break;
//	default:
//		printf("������1-7����ֵ\n");
//		break;
//	}
//	return 0;
//
//}


//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break; //������һ��ѡ��
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("�Ǻ�");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    printf("%d", func(1));
//    return 0;
//}

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = 0;
//	max = a > b ? a : b;
//	max = max > c ? max : c;
//	printf("%d", max);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int arr[] = { a,b,c };
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3 - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	printf("�����:\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int min(int x, int y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &a, &b);
//	A = max(a, b);
//	B = min(a, b);
//	c = A % B;
//	while (c!=0)
//	{
//		A = B;
//		B = c;
//		c = A % B;
//	}
//	printf("���Լ��Ϊ:%d\n", B);
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", j);
//		}
//	}
//	return 0;
//}