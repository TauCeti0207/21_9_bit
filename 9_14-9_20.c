#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
//输出1 - 100奇数
int main1401()
{
	int i = 1;
	while (i < 101)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);

		}
		i++;
	}
	return 0;
}

//
//switch括号里必须是整形表达式
//float day = 1.2;
//switch (day)
//就不行
//case后面必须是整形常量表达式
//不能是1.0 也不能是n
//不要忘掉break
//case也不是必须要加上的
//default 处理非法错误
//顺序没有要求
//switch允许嵌套使用

int main1402()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
//EOF  是ctrl + z
//end of file 本质是 - 1
//文件结束标志

int main1403()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}
//password 是数组 不用再加& 符号, 数组名代表数组首地址
//
//输入函数都从输入缓冲区中读取数据
//当输入123456时还会按下回车即\n
//而scanf只拿走了123456剩下\n
//\n的ASCII值是10
//会被getchar拿走, 直接进入else语句 放弃确认了
//
//可以先利用getchar把缓冲区读取干净
//scanf遇到空格会停止输入
//
//修改为
int main1405()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}



int main1406()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
		printf("\n");
	}
	return 0;
}
//只输出0 - 9的数字
//
//for循环
//break / continue
//switch没有continue
//break只能跳出一层循环
//continue终止本次循环, 跳过后面循环
//break 终止本层循环


//for循环用的最多
int	main1407()
{
	int i = 0, j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}
//为什么十个呵呵
//层循环的j到10后, 去外层, j仍然为10, 缺少重新赋初值

int	main1408()
{
	int i = 0, j = 0;
	for (; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}

//100个呵呵



int main1409()
{
	int i = 1, sum = 1, n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
	return 0;
}

//求n阶乘


int main1410()
{
	int i = 1, sum = 0, n = 0, ret = 1, k = 0;
	scanf("%d", &k);
	for (n = 1; n <= k; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}

	printf("%d\n", sum);
	return 0;
}

//1!+ 2!+ 3!+ ...
//ret每次进入内循环时要重新赋值为1, 不然会把上一次累计的ret一起乘进去


int main1411()
{
	int i = 1, sum = 0, n = 0, ret = 1, k = 0;
	scanf("%d", &k);
	for (n = 1; n <= k; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);
	return 0;
}
//
//优化后
//不用每次求阶乘都是从头开始乘


int main1412()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了,下标是:%d", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("找不到");

	}
	return 0;
}
//顺序查找, 时间效率很低
//O(n)

int main1413()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了,下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}

//二分查找, 时间效率大大提高
//注意循环结束条件是左边下标大于右边下标时
//只有left <= right才能查找


//还需添加 Sleep需要windows.h

int main1414()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//获取字符串数组最后一个元素下标需-2 最后面是/0
	//或者用strlen,不会计算/0,求的是字符串长度
	int right = strlen(arr1) - 1;
	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);  //休息1000ms
		right--;
		left++;
	}
	return 0;
}


//再补充个system(“cls”)清空屏幕
//
//
//== 是不能用来判断2个字符串是否相等
//应该使用库函数, strcmp stdlib.h
//如果2个字符串相等, 返回0
int main1415()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确,登录成功");
			break;
		}
		else
		{
			printf("密码错误\n");
		}

	}
	if (i == 3)
	{
		printf("三次密码均错误,退出程序\n");
	}
	return 0;

}



int main1416()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

//三个数字从大到小排序


int main1417()
{
	int m = 0, n = 0, r = 0;
	scanf("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("最大公约数是%d\n", n);
	return 0;
}
//取最大公约数, 18 % 24 = 18
//辗转相除法

int main1418()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//1能被4整除且不能被100整除
		//2能被400整除是闰年
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

//判断闰年

int main1513()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//1能被4整除且不能被100整除
		//2能被400整除是闰年
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}


	}
	printf("\ncount = %d\n", count);
	return 0;
}

//也可以一条语句完成判断


int main1514()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//1试除法判断
		//13 2-12去试探
		//产生2-i-1的数字
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount = %d\n", count);
	return 0;
}

//找出100 - 200之间的素数


int main1515()
{
	//一个数=a*b,至少有a或b<=开平方这个数
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{

		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount = %d\n", count);
	return 0;

}

//优化后, 试除次数减少

int main1516()
{
	//一个数=a*b,至少有a或b<=开平方这个数
	int i = 0;
	int count = 0;
	//偶数不可能是素数
	for (i = 101; i <= 200; i += 2)
	{

		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount = %d\n", count);
	return 0;

}
//继续优化

int main1604()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}
//1-100出现多少个数字9
//得让2个if呈现并列关系,才能出现2个99


int main1605()//分数求和  1-1/2+1/3+...
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
		//注意得使用浮点数,不然1/2=0
		//巧妙利用flag构造正负1交替
	}
	printf("sum= %lf\n", sum);
	return 0;
}

int main1606()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0]; //假设第一个值是最大值
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)//直接从第二个数开始比较是否为最大值
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}


int main1607() //99乘法表
{
	int i = 0;
	//确定打印9行
	for (i = 0; i <= 9; i++)
	{
		//打印一行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
			//-2d表示向左对齐,2位数字,不足的用空格补齐
		}
		printf("\n");	//打印完一行再换行
	}
	return 0;
}

void menu()
{
	printf("*******************************\n");
	printf("*******1.play   0.exit*********\n");
	printf("*******************************\n");
}
//RAND_MAX   //#define RAND_MAX 0x7fff  32767
void game()
{
	//1生成1-100之间随机数  0-32767 数字太大了不太好

	int ret = 0;
	int guess = 0;


	ret = rand() % 100 + 1;
	//伪随机数
	//printf("%d\n", ret);
	//2猜数字
	// 
	while (1)
	{
		printf("猜猜数字:\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你,猜对了!!!\n");
			break;
		}
	}
	//printf("猜数字\n");
}
int main1608()	//猜数字游戏,
//1电脑生成一个随机数
//2猜数字,有菜单,可玩性高
{
	srand((unsigned int)time(NULL));	//设置一次就行了,不要频繁去设置
	//srand 需要传入的参数类型是unsigned int 强制转换即可
	// 而time 返回的是 time_t 型 是long的重定义
	// 
	//time_t time( time_t *destTime );
	//__time32_t _time32(__time32_t * destTime);
	//__time64_t _time64(__time64_t * destTime);
	// 
	// 
	//时间戳,计算机起始时间1970 0时0分0秒
	// 当前计算机时间-起始时间 =xxxx(秒)
	// 用时间戳设置随机数生成器起始点
	//如果srand的数字不变,rand的值也会一直不变
	//srand需要传递一个随机数
	//给别人随机数,只能给他一个随时在变化的数值就行,!! 时间戳
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
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
	} while (input);	//当输入0时,恰好退出switch循环和while循环,!!巧妙啊
	return 0;
}



// crt_rand.c
// This program seeds the random-number generator
// with a fixed seed, then exercises the rand function
// to demonstrate generating random numbers, and
// random numbers in a specified range.



void SimpleRandDemo(int n)
{
	// Print n random numbers.
	for (int i = 0; i < n; i++)
	{
		printf("  %6d\n", rand());
	}
}

void RangedRandDemo(int range_min, int range_max, int n)
{
	// Generate random numbers in the interval [range_min, range_max], inclusive.

	for (int i = 0; i < n; i++)
	{
		// Note: This method of generating random numbers in a range isn't suitable for
		// applications that require high quality random numbers.
		// rand() has a small output range [0,32767], making it unsuitable for
		// generating random numbers across a large range using the method below.
		// The approach below also may result in a non-uniform distribution.
		// More robust random number functionality is available in the C++ <random> header.
		// See https://docs.microsoft.com/cpp/standard-library/random
		int r = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		printf("  %6d\n", r);
	}
}

int main1609(void)
{
	// Seed the random-number generator with a fixed seed so that
	// the numbers will be the same every time we run.
	srand(1792);

	printf("Simple random number demo ====\n\n");
	SimpleRandDemo(10);
	printf("\nRandom number in a range demo ====\n\n");
	RangedRandDemo(-100, 100, 10);
}
//每一次生成的数都是相同的



int main1610()	//goto 死循环语句
{
again:
	printf("hello\n");
	goto again;
	return 0;

}
//goto语句跳来跳去 打乱程序原有结构 容易出现bug 不建议使用
//主要用于终止深层嵌套
//
//cmd command - 命令行


int main1704()
{
	char input[20] = { 0 };
	//shutdown -s -t 60		一分钟关机
	//shutdown -a  取消关机
	//system()执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("请注意:你的电脑将在1分钟后关机,如果输入我是猪就取消关机\n请输入:\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("再给你一次机会\n");
		goto again;
	}
	return 0;
}


//结构体
//struct
//	自己创造出来的一种类型
//	结构体变量.成员
//	结构体指针->成员



	struct Book
{
	char name[20];
	short price;
};
//struct Book b1 = { "c语言程序设计",55 };
//struct Book* pb = &b1;
//strcpy(b1.name, "C++");


//string copy字符串拷贝, 库函数 string.h
//name是一个数组 不是变量 不能直接赋值修改值
//
//
//函数
//为什么会有库函数
//一些经常使用到的功能, c语言本身提供, 为了提高效率

int main1705()
{
	//strcpy string copy
	//strlen string length
	char arr1[] = "bit";
	char arr2[20] = "########\0";
	//拷贝过来后其实是bit\0######
	// 打印时遇到\0 就结束了,字符串结束标志
	// 末尾加上\0就不会出现乱码 烫烫烫烫....了
	printf("%s\n", arr2);
	strcpy(arr2, arr1);
	//strcpy会把末尾的\0也拷贝过去
	printf("%s\n", arr2);
	return 0;
}



//是素数返回1 不是素数返回0
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)	//2->i-1的数字 去试除
	{
		if (n % j == 0)
		{
			return 0;	//return 0比break强大  return 0执行后 break没有机会执行
			//break;	//return 0一执行 函数直接结束 break只是跳出一层循环
		}
	}
	if (j > sqrt(n))
	{
		return 1;
	}
}
int main1706()
{
	//打印100-200之间的素数
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)	//偶数不可能是素数
	{
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n总共%d个素数\n", count);
	return 0;
}



int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;	//函数要单纯 不要打印
	}
	else
	{
		return 0;
	}
}
int main1801()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断是否为闰年
		if (is_leap_year(year))
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("\n%d\n ", count);
	return 0;
}


int binary_search(int arr[], int k, int sz)//本质是这里的arr是一个指针 指针的大小永远是4/8 取决于平台
{
	//返回值都是整型 所以是int
	int left = 0;
	//数组在传参时为了避免空间浪费,仅仅传的是首地址

	int right = sz - 1;	//记得要-1 数组大小-1
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;	//返回下标
		}
	}
	return -1;
}
int main1802()
{
	//二分查找
	//在一个有序数组中查找具体某个数
	//如果找到了返回这个数下标,找不到返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,20 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了,下标是%d\n", ret);
	}
	return 0;
}

//!!传递数组要注意

void Add(int* p)
{
	(*p)++;	//注意++优先级更高,要加()
}
int main1803()	//每次调用函数 num值加1 要用传地址才能改变num的值
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}


int main1804()
{
	int len = 0;
	//1 
	len = strlen("abc");
	printf("%d\n", len);

	//2 链式访问
	printf("%d\n", strlen("abc"));
	return 0;
}


int main1805()
{
	//printf return value is
	//On success, the total number of characters written is returned.
	printf("%d ", printf("%d ", printf("%d ", 43)));
	//43 2 1
	return 0;
}


//函数的声明放在头文件.h
//函数的定义另外起一个源文件 add.c
//要想使用 include即可
//#include”add.h”	自己写的要用””
//
//函数声明只是声明 不关心函数是不是真的存在
//先声明后使用


//#ifndef __ADD_H__	//如果没有定义 __ADD_H 返回值为真 就定义  避免多个工程重复include
//#define __ADD_H__
//int Add(int x, int y);
//#endif // !__ADD_H__



//递归

int main1806()	//递归
{
	printf("呵呵\n");
	main();	//最简单的递归
	return 0;
}
//一直循环呵呵,然后栈溢出 Stack overflow
//任何一次函数调用都会向内存申请空间  不断申请空间 栈区空间被占满 然后栈溢出
//栈区 堆区 静态区
//栈区 局部变量 函数形参
//堆区 动态开辟的内存 malloc ccalloc
//静态区 全局变量 static 修饰的变量


void print(int n)
{
	if (n > 9)	//递归要找到条件 满足条件才继续递归 不然会死循环 栈溢出
		//每次递归之后越来越接近条件
		//递归的2个必要条件
		//没写出2个必要条件 基本是错误的

	{
		print(n / 10);
		//从哪来返回到哪
	}
	printf("%d ", n % 10);
}
int main1901()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//递归 函数自己调用自己
	//把复杂问题拆成一个个小问题 与原问题相似
	//1234
	//123 4
	//12 3 4
	//1 2 3 4
	print(num);
	return 0;
}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//自己写一个函数求字符串长度
int main1902()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}


//要求不能使用临时变量 求字符串长度 如不能用count
//递归
int my_strlen1(char* str)
{
	if (*str != 0)	//递归的必要条件
	{
		return 1 + my_strlen1(str + 1);
	}
	else
	{
		return 0;
	}
}
//自己写一个函数求字符串长度
int main1903()
{
	char arr[] = "bit";
	int len = my_strlen1(arr);
	printf("len = %d\n", len);
	return 0;
}


//递归与迭代
//求n的阶乘
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

int main1904()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac1(n);
	printf("%d\n", ret);
	return 0;
}


int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}
int main2002()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);
	printf("%d\n", ret);
	return 0;
}


//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
int count = 0;

int Fib(int n)
{
	if (n == 3)
		count++;
	if (n <= 2)
	{
		return 1;

	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
//如果求第50个斐波那契数列 要求很久
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//2的50次方...
//从前往后算会好很多
int main2003()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD 测试驱动开发 先去想怎么用这个函数 再去想怎么实现
	ret = Fib(n);
	printf("ret= %d\n", ret);
	printf("count= %d\n", count);
	//计算在算第40个斐波那契数列时 算了多少次Fib(3)
	//被重复计算了3900w次

	return 0;
}


int Fib1(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;	//当n是1或2是 斐波那契数列的值也恰好为1 所以返回1就行
}
//如果求第50个斐波那契数列 要求很久
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//2的50次方...
//从前往后算会好很多
int main2004()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD 测试驱动开发 先去想怎么用这个函数 再去想怎么实现
	ret = Fib1(n);	//速度及其的快!!! 第100个斐波那契数列只需要一瞬间就出来了
	//比Fib 快了好几分钟
	printf("ret= %d\n", ret);

	return 0;
}

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
//递归即使满足必要必要条件也可能出现栈溢出
int main2005()
{
	test(1);
	return 0;
}

void Move_(char From, char Dest)					//移动一个圆盘，将圆盘从来源移动到目的地  从From 移动到Dest 
{
	printf("将一个圆盘从%c柱子 -> %c柱子\n", From, Dest);
}
void Hanoi(char A, char B, char C, int  n)	//总共有n个圆盘，将这n个圆盘  借助 B 柱子 从 A 柱子移动到  C 柱子
{
	if (n == 1)								//当只有一个圆盘时，直接圆盘从 A 柱 移动到 C 柱
	{
		Move_(A, C);
	}
	else
	{
		Hanoi(A, C, B, n - 1);				 //当不只一个圆盘时，我们先将上面 （n -1）个圆盘 借助 C柱子  从 A 柱子移动到 B 柱子

		Move_(A, C);					//A柱剩余一个圆盘，将剩下的一个圆盘从 A 移动到 C
		Hanoi(B, A, C, n - 1);			//再将（n-1）个圆盘 借助 A柱子 从 B柱子 移动到 C柱子
	}
}
int main2006()	//汉诺塔问题
{

	int  n = 0;							//汉诺塔层数
	char A = 'A';						//A柱子
	char B = 'B';						//B柱子
	char C = 'C';						//C柱子
	scanf("%d", &n);

	Hanoi(A, B, C, n);						//将n个圆盘，借助于B柱子，从A柱子移动到C柱子
	return 0;
}


//数组
int main2007()
{
	//数组大小必须是常量表达式
	//不完全初始化,剩下的元素默认初始化为0
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr4));
	printf("%d\n", strlen(arr4));
	//sizeof计算arr4所在空间的大小 7*1
	//strlen求字符串长度 找到\0就停止 但\0不记录
	return 0;
}

//1 strlen和sizeof没有什么关联
//2 strlen求字符串长度 只针对字符串求长度 库函数 需要引用头文件
//3 sizeof 计算变量 数组 类型的大小 单位是字节 只是操作符
int main2008()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	// 4 3 3 随机值
	printf("%d\n", strlen(arr2));
	printf("%d\n", arr1[3]);	//arr1中的结束标志\0也是能打印的

	return 0;
}

//数组在地址空间连续开辟 由低地址到高地址
int main2009()	//研究数组在内存中的储存
{
	//二维数组列绝对不能省略,行可以省略
	int arr[3][4] = { {1,2,3},{4,5} };
	int arr2[][4] = { {1,2,3},{4,5} };
	char arr1[3][4];
	return 0;
}

int main2010()	//输出二维数组内容
{

	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main2011()	//打印二维数组地址
//按行的顺序排列 二维数组在内存中也是连续存储
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p ", i, j, &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void bubble_sort(int* arr[], int sz)
{
	//一趟冒泡排序,下一趟比较次数-1
	//10个元素比较9对,下一趟9个元素比较8次 
	//确定躺数 10个元素9躺
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}

//冒泡排序
int main2012()	//数组作为函数参数传递
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序 排成升序
	//对数组进行传参 传过去的是首元素地址 避免空间浪费 &arr[0]
	bubble_sort(arr, sz);
	//遍历数组元素
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//改进:
void bubble_sort(int* arr[], int sz)
{
	//一趟冒泡排序,下一趟比较次数-1
	//10个元素比较9对,下一趟9个元素比较8次 
	//确定躺数 10个元素9躺
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;	//假设这一趟排序的数据已经有序
		//每一趟排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]);
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;	//本躺排序数据其实不完全有序 
			}
		}
		if (flag == 1)
		{
			break;	//这一趟确实有序 直接跳出
		}
	}

}

//冒泡排序
int main2013()	//数组作为函数参数传递
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序 排成升序
	//对数组进行传参 传过去的是首元素地址 避免空间浪费 &arr[0]
	bubble_sort(arr, sz);
	//遍历数组元素
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//缺点 效率比较低 太老实了 如果传过去的已经是有序的就没必要一直比较


int main2014()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };


	//数组名就是首元素地址
	//2个例外
	//1.sizeof (数组名) 计算的是整个数组的大小 单位是字节
	//2.&数组名  代表的是取出整个数组地址
	printf("%p\n", arr);
	printf("%p\n", arr + 1);	//+4

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);	//+4


	printf("%p\n", &arr);	//整个数组地址
	//意义不相同
	printf("%p\n", &arr + 1);	//整个数组地址	+40 10个元素

	return 0;
}