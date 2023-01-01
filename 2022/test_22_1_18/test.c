//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////int main()
////{
////	int a[3][4] = { 0 };
////	printf("%p\n", &a[0][0]);
////	printf("%p\n", (a + 1));
////	return 0;
////}
////struct Test
////{
////	int Num;
////	char* pcName;
////	short sDate;
////	char cha[2];
////	short sBa[4];
////}*p;
//////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//////已知，结构体Test类型的变量大小是20个字节
////int main()
////{
////	p = (struct Test*)0x100000;
////	printf("%p\n", p + 0x1);//跳过20个字节
////	printf("%p\n", (unsigned long)p + 0x1);
////	printf("%p\n", (unsigned int*)p + 0x1);
////	return 0;
////}
//
////int main()
////{
////	int a[4] = { 1, 2, 3, 4 };
////	int* ptr1 = (int*)(&a + 1);
////	int* ptr2 = (int*)((int)a + 1);
////	printf("%x,%p", ptr1[-1], *ptr2);
////	return 0;
////}
////#include <stdio.h>
////int main()
////{
////	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
////	int* p;
////	p = a[0];
////	printf("%d", p[0]);
////	return 0;
////}
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	int c = -4;
//	printf("%p,%d\n", c, c);
//	return 0;
//}
//
//int main() {
//	char a[1000]; int i; for (i = 0; i < 1000; i++) { a[i] = -1 - i; }printf("%d", strlen(a)); //strlen介绍，字符串认识，\0的认识 return 0; }


//int main()
//{
//	int flag = 0;
//	if (flag == 0)
//	{
//		printf("1\n");
//	}
//	if (flag == false)
//	{
//		printf("2\n");
//	}
//	if (!flag)
//	{
//		printf("3\n");
//	}
//	return 0;
//}


#include<stdio.h>
#include<math.h>
#include<float.h>
int main()
{
	double x = 1.0;
	double y = 0.1;
	printf("%.50f\n", x - 0.9);
	printf("%.50f\n", y);
	if(fabs((x-0.9) - y) < DBL_EPSILON)
	{
		printf("1\n");
	}
	else
	{
		printf("2\n");
	}
	if (fabs(x-0) < FLT_EPSILON)
	{
		//...
	}
	return 0;
}