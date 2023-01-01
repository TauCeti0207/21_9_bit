//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////#define N 210
////int main()
////{
////	int n, i, j;//n<=200 
////	int output[N] = { 0 };
////	int temp;
////	scanf("%d", &n);
////	//输入数组 
////	for (i = 0; i < n; i++)
////		scanf("%d", &output[i]);
////	//排序
////	for (i = 0; i < n; i++)
////	{
////		for (j = i + 1; j < n; j++)
////		{
////			if (output[i] > output[j])
////			{
////				temp = output[j];
////				output[j] = output[i];
////				output[i] = temp;
////			}
////		}
////	}
////	for (i = 0; i < n; i++)
////		printf("%d ", output[i]);
////	return 0;
////}
//
////#include<stdio.h>
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	scanf("%d %d", &a, &b);
////	c = a % b;//不管大除小还是小除大都行
////	//假设a>b就行,即使a<b也会进入循环,如何把b赋给a
////	int x = a;
////	int y = b;
////	while (c)
////	{
////		a = b;
////		b = c;
////		c = a % b;
////	}
////	printf("最大公约数为:%d 最小公倍数为:%d\n", b, x * y / b);
////	return 0;
////}
//
////int main()
////{
////	int m = 0;
////	int n = 0;
////	scanf("%d %d", &m, &n);
////	//求最大公约数
////	int ret = 0;
////	//1. 求m和n 较小值，假设就是最大公约数
////	if (m > n)
////		ret = n;
////	else
////		ret = m;
////	//一个一个数尝试就行
////	while (1)
////	{
////		if (m % ret == 0 && n % ret == 0)
////		{
////			break;
////		}
////		ret--;
////	}
////	//打印
////	printf("%d\n", ret);
////	return 0;
////}
//
//
////素数也叫质数
////只能被1和它本身整除的数字就是素数
////试除法
////判断y是不是素数,
////拿2~i - 1的数字去试除
//~~~
//#include<stdio.h>
//int main()
//{
//     int i = 0;
//     for (i = 100; i < 200; i++)
//     {
//             int j = 0;
//             int flag = 1;//假设i是素数
//             for (j = 2; j < i; j++)
//             {
//                    if (i % j == 0)
//
//                    {
//
//                            flag = 0;//i不是素数
//
//                            break;
//
//                    }
//
//             }
//             if(flag == 1)
//
//             {
//
//                    printf("%d ", j);
//
//             }
//
//     }
//
//     return 0;
//
//

////}
//
//
////y = a*b
////a和b中至少有一个数字是<=根号y
////16 = 2*8 2能被16整除,另一个8肯定也能,不用再往下算
////17
////2 3 4 都不能整除17 后面肯定也不能了
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//判断y是不是素数,
//	//拿2 ~ i - 1的数字去试除
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不是素数
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
//
//}
//
////i+=2更高效
//for (i = 101; i <= 200; i += 2)
////以上3种都是试除法
////素数求解的N种境界
//
//int main()
//{
//	int y = 0;
//	for (y = 100; y <= 200; y++)
//	{
//		//判断y是不是素数
//		//拿2~y-1的数字去试除y就行
//		int n = 0;
//		int flag = 1;//假设y是素数
//		for (n = 2; n < y; n++)
//		{
//			if (y % n == 0)
//			{
//				flag = 0;//y不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", y);
//	}
//	return 0;
//}


#include <math.h>
#include<stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	for (y = 101; y <= 200; y+=2)
	{
		int n = 0;
		int flag = 1;//假设y是素数
		for (n = 2; n <= sqrt(y); n++)
		{
			if (y % n == 0)
			{
				flag = 0;//y不是素数
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", y);
			count++;
		}

	}
	printf("\ncount = %d\n", count);

	return 0;
}
