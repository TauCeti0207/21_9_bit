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
//			printf("找到了,下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
#include<stdio.h>
//有序数组找某个数字
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
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
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
//	//sizeof 要-2 因为包含了\0
//	int right = strlen(arr1) - 1;
//	//strlen计算时不包含\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//睡眠函数-单位是函数
//		system("cls");//执行系统命令,清理屏幕
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
//			if (arr[j] > arr[j + 1])//从小到大排序
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
//	printf("最大值为%d\n", arr[9]);
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
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到\n");
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


////Add只是个接口
////OJ题 接口型
//int Add(int x, int y)
//{
//	//这里才是要完成的代码
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

////时间转换
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
//    //3666%3600=66 模完3600就是不够一小时的秒数
//    //秒数再提取分钟 /60
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
//    //0.0默认为double类型,加上f才是float类型
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//    }
//    //printf 默认打印5位小数
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

//2.反向输出4位数
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
//我写的, 不太好, 需要思考
//
//别人的 :
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
//		if (i = 5)//赋值而不是判断
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
////将3个整数从大到小输出
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
////	//求最大公约数
////	int m = 0;
////	int n = 0;
////	scanf("%d %d", &m, &n);
////	int ret = 0;
////	//1.求m n较小值,假设就是最大公约数
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
////	//2.打印
////	printf("%d\n", ret);
////	return 0;
////}
//
//
//
////2辗转相除法
//#include<stdio.h>
//int main()
//{
//	//求最大公约数
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
////1.能被4整除且不能被100整除
////2.能被400整除
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
//	//判断y是不是素数,
//	//拿2 ~ i - 1的数字去试除
//	int i = 0;
//
//	for (i = 100; i < 200; i++)
//
//	{
//
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不是素数
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
//a和b中至少有一个数字是<=根号y
//16 = 2*8 2能被16整除,另一个8肯定也能,不用再往下算
//17
//2 3 4 都不能整除17 后面肯定也不能了

//#include<stdio.h>
//#include<math.h>
//int main()
//
//{
//	//判断y是不是素数,
//	//拿2 ~ i - 1的数字去试除
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
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
//}
////i+=2更高效
////以上3种都是试除法
////素数求解的N种境界

//#include<stdio.h>
//#include<string.h>
//int main()
//
//{
//	int i = 0;
//	char password[20] = "";
//	//假设密码123456
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", password);
//		//password是数组名,本来就表示地址
//		//if (password == "123456")
//		//{
//		//	//比较2个字符串是否相等,不能使用==
//		//	//用strcmp string compare
//		//}
//		//返回0,说明2个字符串相等
//		//也可能会返回小于0,大于0的数字
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("3次密码均错误,退出程序\n");
//	}
//	return 0;
//}




//猜数字游戏
//随机生成一个1-100数字
//电脑会告诉玩家猜大还是猜小了
//猜对了,恭喜玩家并告知猜的次数
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
	//猜数字的过程
	//time 返回值是time_t 其实是int的重定义
	//而srand接收值是unsigned int
	//为了生成随机数,需要一个随机数???
	//只需要给srand传经常发生变化的值就行,每一秒时间都会产生数字
	// 时间戳 当前时间和计算机起始时间差值 19700101
	//生成随机数rand函数 0~RAND_MAX
	//#define RAND_MAX 0x7fff,32767
void game()
{
	int guess = 0;
	int count = 0;
	int r = rand() % 100 +1;// 0 ~ 99+1
	//猜数字
	while (1)
	{
		printf("猜数字\n");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
			count++;
		}
		else if (guess > r)
		{
			printf("猜大了");
			count++;
		}
		else
		{
			count++;
			printf("恭喜你猜对了,猜了%d次\n", count);
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数生成器,不需要频繁使用srand
	do
	{
		//打印菜单,不管三七二十一先打印菜单,do while更合适
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}