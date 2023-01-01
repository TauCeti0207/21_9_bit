#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//柔性数组2种写法
//struct S1
//{
//	int n;
//	int arr[0];//大小未指定
//};
//struct S2
//{
//	int n;
//	int arr[];//大小未指定
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//4
//	printf("%d\n", sizeof(struct S2));//4
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2) + 40);
//	ps->n = 100;
//	for (size_t i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//...
//	//增容
//	struct S2* ptr = (struct S2*)realloc(ps, sizeof(struct S2) + 80);
//	if (ptr == NULL)
//	{
//		return 0;
//	}
//	else
////	{
////		ps = ptr;
////	}
////
////	//继续使用
////
////	//释放
////	free(ps);
////	ps = NULL;
////	return 0;
////}

#include<string.h>
#include<errno.h>
struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	//使用
	//增容

	//释放
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}