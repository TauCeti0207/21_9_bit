#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("我要继续努力敲代码\n");
//		//printf("%d\n", line);
//	}
//	if (line > 20000)
//		printf("恭喜你找到好offer\n");
//	else
//	{
//		printf("火候还不够\n");
//	}
//	return 0;
//}

//求2个整数的和
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
//	printf("输入两个操作数:>");
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
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	//scanf 中格式串怎么写的,就必须怎么输入
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个整形数组，最多放10个元素
//	//存字符 - 字符数组
//	char ch1[3] = { 'a','b','c' };
//	char ch2[6] = "hello";
//	//hello 后面还有一个'\0'
//	//最好初始化
//	int arr1[10];
//	printf("%d\n", arr1[0]);
//	//vs2019 数组未初始化 不会报错
//	
//	//不完全初始化
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
//	printf("请输入2个值:>\n");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("较大值为%d\n", Max(a, b));
//	return 0;
//}

//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	printf("请输入2个值:>\n");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("较大值为%d\n", Max(a, b));
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