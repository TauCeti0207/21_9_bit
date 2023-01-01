#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stddef.h>
//
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//struct S3
//{
//	double d;
//	int i;
//	char c;
//
//};
//int main()
//{
//	printf("%d\n", (int)sizeof(struct S1));//12
//	printf("%d\n", (int)sizeof(struct S3));//16
//	printf("%d\n", (int)offsetof(struct S3, d));//0
//	printf("%d\n", (int)offsetof(struct S3, i));//4
//	printf("%d\n", (int)offsetof(struct S3, c));//8
//	//(int)这样才不会产生警告，sizeof和offsetof返回的都是size_t
//	return 0;
//}

//#include<stdio.h>
//#include<stddef.h>
//#pragma pack(1)
//struct S1
//{
//	char c1;//1 - 1 - 1
//	int i;//4 - 1 - 1
//	char c2;//1 - 1 - 1
//};
//struct S3
//{
//	double d;//1
//	int i;//1
//	char c;//1
//
//};
//int main()
//{
//	printf("%d\n", (int)sizeof(struct S1));//6
//	printf("%d\n", (int)sizeof(struct S3));//13
//	//(int)这样才不会产生警告，sizeof和offsetof返回的都是size_t
//	return 0;
//}
//#include<stdio.h>
//struct S {
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s) {
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(const struct S* ps) {
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //传结构体
//	print2(&s); //传地址
//	return 0;
//}

//#include<stdio.h>
//struct A {
//	int _a : 2;//a成员只需要2个bit位
//	int _b : 5;//5个bit位
//	int _c : 10;//10个bit位
//	int _d : 30;//30个bit位
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	return 0;
//}

//#include<stdio.h>
//struct S 
//{
//	//1byte 8bit
//	char a : 3;//剩余5
//	char b : 4;//剩余1
//	//再开1byte
//	char c : 5;//剩余3
//	//再开1byte
//	char d : 4;//剩余1
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));//3
//	return 0;
//}
//#include<stdio.h>
//enum Day//星期
//{
//    //枚举的可能取值
//    Mon,
//    Tues,
//    Wed,
//    Thur,
//    Fri,
//    Sat,
//    Sun
//};
//typedef enum Sex//性别
//{
//    MALE=4,
//    FEMALE,
//    SECRET
//}Sex;
//int main()
//{
//    enum Day d = Sun;
//    Sex s = MALE;
//    printf("%d\n", MALE);//4
//    printf("%d\n", FEMALE);//5
//    printf("%d\n", SECRET);//6
//    printf("%d\n", sizeof(MALE));//4
//    return 0;
//}

//#include<stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &u);//00AFF9D8
//	printf("%p\n", &(u.c));//00AFF9D8
//	printf("%p\n", &(u.i));//00AFF9D8
//	return 0;
//}

//#include<stdio.h>
//int check_sys()
//{
//	union//使用匿名联合体,只用一次,避免之后的命名冲突
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");//结果为1 证明是小端存储
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//union Un1
//{
//	char c[5];//1 - 8 ->1 VS默认对齐数8
//	int i;//4 - 8 ->4
//};
//union Un2
//{
//	short c[7];//2
//	int i;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un1));//8,最大对齐数是4,
//	//最大成员大小是5,不是4整数倍
//	printf("%d\n", sizeof(union Un2));//16
//	//最大成员大小是14,也不是4的整数倍
//	return 0;
//}


//int main()
//{
//	//开辟10个整型空间
//	int* p = (int*)malloc(4000000000000000);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));//Not enough space
//	}
//	return 0;
//}

//int main()
//{
//	//开辟10个整型空间
//	int* p = (int*)malloc(40);//malloc返回的是void*
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));//Not enough space
//	}
//
//	//使用
//	if (p)
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (size_t i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);//0 1 2 3 4 5 6 7 8 9
//		}
//	}
//
//	//释放
//	free(p);//释放空间后,p保存的还是那个地址,这样p就变成了野指针
//	p = NULL;//所有释放p指向的空间后要把p置为NULL
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//#include<string.h>
//
//int main()
//{
//	//开辟10个整型空间
//	int* p = (int*)calloc(10,sizeof(int));//calloc返回的也是void*
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));//Not enough space
//	}
//
//	//使用
//	if (p)
//	{
//		/*for (size_t i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}*/
//		for (size_t i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);//0 0 0 0 0 0 0 0 0 0
//		}
//	}
//
//	//释放
//	free(p);//释放空间后,p保存的还是那个地址,这样p就变成了野指针
//	p = NULL;//所有释放p指向的空间后要把p置为NULL
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main()
{
	//开辟10个整型空间
	int* p = (int*)realloc(NULL, 40);//realloc 如果传NULL 那就与malloc等价
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));//Not enough space
	}

	//使用
	if (p)
	{
		for (size_t i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (size_t i = 0; i < 10; i++)
		{
			printf("%d ", p[i]);//
		}
	}

	//释放
	free(p);//释放空间后,p保存的还是那个地址,这样p就变成了野指针
	p = NULL;//所有释放p指向的空间后要把p置为NULL
	return 0;
}