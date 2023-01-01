#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//4byte
//	//& 取地址操作符
//	//a占4个字节,每个字节都有编号
//	//取出的是所占4个字节空间的第一个字节的地址(地址小的那个字节)
//	printf("%p\n", &a);
//	//%p 地址的打印格式
//	int* p = &a;
//	*p = 20;
//	//* 解引用操作符,*p通过p中的值,找到p所指的对象
//	//*表示p是指针变量
//	//int 表示p指向的对象的类型是int类型
//	//p是用来存地址的,所以把p称为指针变量
//	printf("%p\n", p);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//指针变量的大小取决于地址的大小
//32位平台下地址是32个bit位（即4个字节）
//64位平台下地址是64个bit位（即8个字节）
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
//	//结构体成员
//	char name[20];//名字
//	int age;//年龄
//	char sex[10]; //性别
//	//char id[15]; //学号
//	//[]空间大小必须明确指定
//	//....还可以继续添加
//};
//int main()
//{
//	struct Stu zhangsan = { "张三",30,"男" };
//	struct Stu lisi = { "李四",24,"保密" };
//	printf("%s %d %s\n", zhangsan.name, zhangsan.age, zhangsan.sex);
//	printf("%s %d %s\n", lisi.name, lisi.age, lisi.sex);
//	//.为结构成员访问操作符
//	// 
//	//->操作符
//	//printf("%d\n", strlen("中国"));
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
//		printf("成年\n");
//	}*/
//	/*if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年");
//	}*/
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if(age>=18&&age<40)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age < 90)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年");
//		printf("可以谈恋爱");
//	}
//	else
//	{
//		printf("未成年");
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

//适当的使用{}可以使代码的逻辑更加清楚。
//代码风格很重要
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
//		printf("奇数\n");
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
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
////switch代码演示
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

//switch代码演示

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
//		printf("请输入1-7的数值\n");
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
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break; //跳出这一层选择
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
//		printf("呵呵");
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
//	printf("排序后:\n");
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
//	printf("最大公约数为:%d\n", B);
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