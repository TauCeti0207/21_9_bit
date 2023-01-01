#define _CRT_SECURE_NO_WARNINGS 1
//int Add(int x, int y)
//{
//	int z = 0;//此处的z也算局部变量
//}
//int main()
//{
//	int a = 0;//a也算局部变量
//	return 0;
//}



//int main()
//{
//
//	return 0;
//}

//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//        return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    //输入
//    int ret = 0;
//    scanf("%d", &ret);
//    if (ret % 5 == 0)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char int1 = 1;
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n1 = 0;
//    int n2 = 0;
//    int max = 0;
//    return 0;
//}
//#include<stdio.h>
//int Div(int x, int y)
//{
//    return x / y;
//}
//int Mod(int x, int y)
//{
//    return x % y;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", Div(a, b), Mod(a, b));
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a/b,a%b);
//    return 0;
//}

#include<stdio.h>
//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}







////关键字static
//void test()//void 表示不需要函数返回任何值
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//		//0-9都进来了,10不满足条件
//		//循环10次
//	}
//	return 0;
//}
////代码结果?  10个2

////关键字static
//void test()//void 表示不需要函数返回任何值
//{
//	static int a = 1; //使用static修饰局部变量
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//		//0-9都进来了,10不满足条件
//		//循环10次
//	}
//	return 0;
//}
////代码结果?  2 3 4 5 6 7 8 9 10 11 


//如果想使用来自其他文件(外部文件)的全局变量,先要声明一下
extern int g_val;
//extern是一个关键字,专门用来声明外部符号的
//g_val在add.c文件创建的
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


////Add是外部函数,得先声明
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}



////define定义标识符常量
//#define M 100
//#define STR "hehe"
//int main()
//{
//	printf("%d\n", M);
//	printf("%s\n", STR);
//	return 0;
//}
//

////#define 定义宏
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	//a要在内存中开辟空间
//	//a是整型,占4个字节
//	printf("%p\n", &a);
//	//打印出a的地址
//	//如何存储a的地址呢
//	int* p = &a;//p就是指针变量
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//a要在内存中开辟空间
//	//a是整型,占4个字节
//	printf("%p\n", &a);
//	//打印出a的地址
//	//如何存储a的地址呢
//	int* p = &a;//p就是指针变量
//	*p = 20;//此处的*是解引用操作符
//	printf("%d\n", a);//此时a就是20
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	//a要在内存中开辟空间
//	//a是整型,占4个字节
//	printf("%p\n", &a);
//	//打印出a的地址
//	//如何存储a的地址呢
//	int* p = &a;//p就是指针变量
//	*p = 20;//此处的*是解引用操作符
//	printf("%d\n", a);//此时a就是20
//	return 0;
//}