#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
////声明一个学生的结构体类型
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//struct Stu
//{
//	struct S ss;
//	char name[20];
//	int age;
//	float score;
//}s1, s2;//s1,s2是2个结构体变量，是全局的
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	struct Stu s = { {100, 'w', 3.14}, "zhansan", 20, 95.5f};//定义一个结构体变量，局部的
//	printf("%d %c %lf %s %d %f\n",s.ss.a, s.ss.c, s.ss.d, s.name, s.age, s.score);
//
//	return  0;
//}

//#include<stdio.h>
//struct  S
//{
//	int arr[1000];
//	float f;
//	char ch[100];
//};
//
//void print1(struct S tmp)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("\n");
//	printf("%f\n", tmp.f);
//	printf("%s\n", tmp.ch);
//}
//
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("%f\n", ps->f);
//	printf("%s\n", ps->ch);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,10}, 5.5f, "hello" };
//	print1(s);//传值调用 会再创建一份临时空间,形参是实参的一份临时拷贝
//	//空间浪费比较严重
//
//	print2(&s);//传址调用
//
//	return  0;
//}


//#include<stdio.h>
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	return 0;
}