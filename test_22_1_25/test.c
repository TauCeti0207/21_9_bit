#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<limits.h>
//#include<stdlib.h>
//#include<assert.h>
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);//#define INT_MAX       2147483647
//	assert(p);//Assertion failed: p, file
//	if (p)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	return 0;
//}

#include<errno.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//ʹ��
//	for (size_t i = 0; i <= 10; i++)
//	{
//		*(p + i) = 'a' + 1;
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//void GetMemory(char** p)
//{
//    *p = (char*)malloc(100);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str);
//    strcpy(str, "hello world");
//    printf(str);//����д�ǿ��Ե�
//
//    //�ͷ�
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();//hello world
//    return 0;
//}

//char* GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//    return p;
//}
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);//����д�ǿ��Ե�
//
//    //�ͷ�
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();//hello world
//    return 0;
//}
////������ַ��returnָ��Ҳ��

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//��ӡ��10�������ң����ֵ
//	return 0;
//}

int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	printf("hehe\n");
	printf("%d\n", *p);//��ʱ��ӡ���ľ�����һ�����ֵ
	return 0;
}