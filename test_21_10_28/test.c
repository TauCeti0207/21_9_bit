#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ���,�±���%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
#include<stdio.h>
//����������ĳ������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


////hello bit!!!!!!!
////################
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr[] = "abc";
//	//[a b c \0]
//	// 0 1 2
//	char arr1[] = "hello bit!!!!!!!";
//	char arr2[] = "################";
//	int left = 0;
//	//int right = sizeof(arr1) - 2;
//	//sizeof Ҫ-2 ��Ϊ������\0
//	int right = strlen(arr1) - 1;
//	//strlen����ʱ������\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//˯�ߺ���-��λ�Ǻ���
//		system("cls");//ִ��ϵͳ����,������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
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
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / (flag * i);
//		flag = -flag;
//	}
//	printf("sum = %f\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,3,6,2,6,8,7,9,5,4 };
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10 - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])//��С��������
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}*/
//	printf("���ֵΪ%d\n", arr[9]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d = %2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 9;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}


////Addֻ�Ǹ��ӿ�
////OJ�� �ӿ���
//int Add(int x, int y)
//{
//	//�������Ҫ��ɵĴ���
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    if (x < 0)
//    {
//        y = 1;
//    }
//    else if (0 == x)
//    {
//        y = 0;
//    }
//    else
//    {
//        y = -1;
//    }
//    printf("%d\n", y);
//    return 0;
//}

////ʱ��ת��
//#include<stdio.h>
//int main()
//{
//    int seconds = 0;
//    scanf("%d", &seconds);
//    int hour = 0;
//    int min = 0;
//    int sec = 0;
//    hour = seconds / 3600;
//    min = seconds % 3600 / 60;
//    //3666%3600=66 ģ��3600���ǲ���һСʱ������
//    //��������ȡ���� /60
//
//    sec = seconds % 3600 % 60;
//    printf("%d %d %d\n", hour, min, sec);
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int i = 0;
//    float avg = 0.0f;
//    //0.0Ĭ��Ϊdouble����,����f����float����
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//    }
//    //printf Ĭ�ϴ�ӡ5λС��
//    avg = sum / 5.0;
//    printf("%.1f\n", avg);
//    return 0;
//}
//
////int main()
////{
////	float a = 5 / 2;
////	printf("%f\n", a);
////	//2.000000
////	return 0;
////}
////int main()
////{
////	float a = 5 / 2.0;
////	printf("%f\n", a);
////	//2.500000
////	return 0;
////}

//2.�������4λ��
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int b = a / 1000;//1
//    int c = a / 100 % 10;//2
//    int d = a % 100 / 10;//3
//    int e = a % 10;//4
//    printf("%d%d%d%d\n", e, d, c, b);
//    return 0;
//}
//~~~
//��д��, ��̫��, ��Ҫ˼��
//
//���˵� :
//~~~
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);//1234
//    while (n)
//    {
//        printf("%d", n % 10);
//        n = n / 10;
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//��ֵ�������ж�
//			printf("%d ", i);
//	}
//	return 0;
//}
// 
// 
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


//
////#include <stdio.h>
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


//void swap(int x, int y)
//{
//	int tmp = y;
//	y = x;
//	x = tmp;
//}
////��3�������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(a, b);
//	}
//	if (a < c)
//	{
//		swap(a, c);
//	}
//	if (b < c)
//	{
//		swap(b, c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

////#include <stdio.h>
////int main()
////{
////    int i = 0;
////    for (i = 1; i <= 100; i++)
////    {
////        if (i % 3 == 0)
////        {
////            printf("%d ", i);
////        }
////    }
////    return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 3; i <= 100; i+=3)
//    {
//            printf("%d ", i);
//    }
//    return 0;
//}
// 
// 

////#include<stdio.h>
////int main()
////{
////	//�����Լ��
////	int m = 0;
////	int n = 0;
////	scanf("%d %d", &m, &n);
////	int ret = 0;
////	//1.��m n��Сֵ,����������Լ��
////	if (m > n)
////	{
////		ret = n;
////	}
////	else
////	{
////		ret = m;
////	}
////	while (1)
////	{
////		if (m % ret == 0 && n % ret == 0)
////		{
////			break;
////		}
////		ret--;
////	}
////	//2.��ӡ
////	printf("%d\n", ret);
////	return 0;
////}
//
//
//
////2շת�����
//#include<stdio.h>
//int main()
//{
//	//�����Լ��
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = 0;
//	while (ret = m % n)
//	{
//		m = n;
//		n = ret;
//	}
//	printf("%d", n);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
////1.�ܱ�4�����Ҳ��ܱ�100����
////2.�ܱ�400����
//
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}



//#include<stdio.h>
//int main()
//
//{
//	//�ж�y�ǲ�������,
//	//��2 ~ i - 1������ȥ�Գ�
//	int i = 0;
//
//	for (i = 100; i < 200; i++)
//
//	{
//
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", j);
//		}
//	}
//	return 0;
//
//}

//y = a*b
//a��b��������һ��������<=����y
//16 = 2*8 2�ܱ�16����,��һ��8�϶�Ҳ��,������������
//17
//2 3 4 ����������17 ����϶�Ҳ������

//#include<stdio.h>
//#include<math.h>
//int main()
//
//{
//	//�ж�y�ǲ�������,
//	//��2 ~ i - 1������ȥ�Գ�
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}
////i+=2����Ч
////����3�ֶ����Գ���
////��������N�־���

//#include<stdio.h>
//#include<string.h>
//int main()
//
//{
//	int i = 0;
//	char password[20] = "";
//	//��������123456
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", password);
//		//password��������,�����ͱ�ʾ��ַ
//		//if (password == "123456")
//		//{
//		//	//�Ƚ�2���ַ����Ƿ����,����ʹ��==
//		//	//��strcmp string compare
//		//}
//		//����0,˵��2���ַ������
//		//Ҳ���ܻ᷵��С��0,����0������
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("3�����������,�˳�����\n");
//	}
//	return 0;
//}




//��������Ϸ
//�������һ��1-100����
//���Ի������Ҳ´��ǲ�С��
//�¶���,��ϲ��Ҳ���֪�µĴ���
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
	//�����ֵĹ���
	//time ����ֵ��time_t ��ʵ��int���ض���
	//��srand����ֵ��unsigned int
	//Ϊ�����������,��Ҫһ�������???
	//ֻ��Ҫ��srand�����������仯��ֵ����,ÿһ��ʱ�䶼���������
	// ʱ��� ��ǰʱ��ͼ������ʼʱ���ֵ 19700101
	//���������rand���� 0~RAND_MAX
	//#define RAND_MAX 0x7fff,32767
void game()
{
	int guess = 0;
	int count = 0;
	int r = rand() % 100 +1;// 0 ~ 99+1
	//������
	while (1)
	{
		printf("������\n");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("��С��\n");
			count++;
		}
		else if (guess > r)
		{
			printf("�´���");
			count++;
		}
		else
		{
			count++;
			printf("��ϲ��¶���,����%d��\n", count);
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������������,����ҪƵ��ʹ��srand
	do
	{
		//��ӡ�˵�,�������߶�ʮһ�ȴ�ӡ�˵�,do while������
		menu();
		printf("��ѡ��:>");
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}