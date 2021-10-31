#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	//goto next;也行,但next需要在同一代码块内
//	return 0;
//}
//



////写一个关机程序
////只要程序启动,倒计时60s关机,如果60s内输入:我是猪 就取消关机 如果不取消,就倒计时关机
//#include<stdio.h>
////shutdown Windows提供的关机命令
////shutdown -s -t 60 60秒后关机
////shutdown -a	取消关机
////system是一个库函数,专门用来执行系统命令
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 6000");
//again:
//	printf("请注意,你的电脑在100分钟内关机,如果输入:我是猪,就取消关机\n");
//	scanf("%s", input);
//	//判断
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//写一个关机程序
//只要程序启动,倒计时60s关机,如果60s内输入:我是猪 就取消关机 如果不取消,就倒计时关机
//shutdown Windows提供的关机命令
//shutdown -s -t 60 60秒后关机
//shutdown -a	取消关机
//system是一个库函数,专门用来执行系统命令
//#include<stdlib.h>
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 6000");
//	while (1)
//	{
//		printf("请注意,你的电脑在100分钟内关机,如果输入:我是猪,就取消关机\n");
//		scanf("%s", input);
//		//判断
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
	
//size_t 无符号整型
//#include<stdio.h>
//#include<string.h>
//#include <cstddef>	//重定义了size_t
//int main()
//{
//	char arr[] = "abc";
//	size_t len = strlen(arr);
//	printf("%u\n",len);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "HELLO";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x',5);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


////size_t 无符号整型
//#include<stdio.h>
//#include<string.h>
//#include <cstddef>	//重定义了size_t
//int main()
//{
//	char arr[] = "abc";
//	size_t len = strlen(arr);
//	printf("%u\n",len);
//	return 0;
//}

//size_t 无符号整型


//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("max is %d\n", m);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}

//#include<stdio.h>
//void menu()
//{
//	printf("*********   1.play  ***********\n");
//	printf("*********   0.exit  ***********\n");
//}
//int main()
//{
//	menu();
//	return 0;
//}

//#include<stdio.h>
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("a = %d b = %d\n", a, b);
//	Swap(a,b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("a = %d b = %d\n", a, b);
//	//Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//int is_prime(int n)
//{
//	//2 ~ n-1数字试除
//	for (int j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	//2 ~ n-1数字试除
//	for (int j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y))
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\n总共%d个\n", count);
//	return 0;
//}

//#include<stdio.h>
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0));
//	//表达式成立返回1,不成立返回0
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y))
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\n总共%d个\n", count);
//	return 0;
//}

//#include<stdio.h>
////找到了就返回下标,找不到返回-1(不返回0,0也有可能是下标)
//int binary_search(int arr[], int k)
//{
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
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = binary_search(arr,k);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是%d\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
////找到了就返回下标,找不到返回-1(不返回0,0也有可能是下标)
//int binary_search(int* arr[], int k,int sz)
//{
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
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是%d\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	for (int j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//#include<stdio.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y))
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\n总共%d个\n", count);
//	return 0;
//}


//#include<stdio.h>
//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//void multiplication_table(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	multiplication_table(n);
//	return 0;
//}