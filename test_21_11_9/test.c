#define _CRT_SECURE_NO_WARNINGS 1
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

////1-1/2+1/3-1/4+...
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * flag;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);//0.688172
//	return 0;
//}


////打擂台,求十个数中最大值
//#include <stdio.h>
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

////99乘法表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//99乘法表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////如何把函数处理的2个结果返回给主调函数
////1.形参用数组
//#include <stdio.h>
//void test(int arr[]) //数组传参,形参用数组接收也是对的 让小白更容易理解 
////只不过实质是指针而已
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr); //其实传过去的是首元素地址
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//如何把函数处理的2个结果返回给主调函数
//2.形参用2个指针
//#include <stdio.h>
//void test(int* px, int* py)
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	test(&x, &y);
//	printf("%d %d\n",x,y);
//	return 0;
//}



////如何把函数处理的2个结果返回给主调函数
////3.使用全局变量
//#include <stdio.h>
//int a = 0;
//int b = 0;
//void test()
//{
//	int x = 10;
//	int y = 20;
//	a = x;
//	b = y;
//}
//int main()
//{
//	test();
//	printf("%d %d\n", a, b);
//	return 0;
//}
#include<stdio.h>
int main()
{

	return 0;
}