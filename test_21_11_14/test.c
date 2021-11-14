#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i * flag);
//		flag = -flag;
//	}
//	return 0;
//}

//#include<stdio.h>
//void test1(int arr[])	//此处arr[]是 int* arr
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4 指针大小
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	printf("%d\n", sizeof(int[10]));//49
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = ~a;
//	//10000000000000000000000000000001	原码
//	//11111111111111111111111111111110	反码
//	//11111111111111111111111111111111	补码
//	printf("%d\n", a);//-1
//	printf("%d\n", b);//0
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = ++a;
//	//printf("a = %d b = %d\n", a, b);//11 11
//
//
//	//int b = a++; //先使用,先把a的值赋给b,a再自增
//	//printf("a = %d b = %d\n", a, b);//11 10
//
//	printf("%d\n", a++);//10 先使用 a再加一 此时a是11了
//	printf("%d\n", ++a);//12   a=11 先+1 再使用
//	printf("%d\n", a--);//12  然后a-1变成11
//	printf("%d\n", a--);//11   先使用a 然后再-1
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);//12
//	printf("%d\n", a); //4
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* px = &(*pa);
//	*pa = 20;
//	printf("%d\n", a);//20
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 3.14;
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 0 && age < 18)
//	{
//		printf("未成年\n");
//	}
//	//不要写成if(0<age<18) 编译能通过,但是有逻辑错误
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month < 1 || month > 12)
//	{
//		printf("输入错误\n");
//	}
//	else
//	{
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = a > b ? a : b;
//	int min = a > b ? b : a;
//	return 0;
//}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", 7[arr]);//8
	printf("%d\n", arr[7]);//8
	return 0;
}
