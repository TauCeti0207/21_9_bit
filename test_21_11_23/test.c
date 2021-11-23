#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	//1~10
//	int arr[10] = { 0 };
//	int i = 0;
//	test();
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	arr[i] = 0;
//	//}
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//const修饰二级指针
//	const int* const * const ppa = &pa;
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)//不希望arr内容被修改
//{
//	assert(str != NULL);//断言
//	//char* end = str;//把安全的str交给了安全的end,end也要加const
//	const char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - str;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}




#include<stdio.h>
int main()
{
	
	return 0;
}