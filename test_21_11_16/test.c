#define _CRT_SECURE_NO_WARNINGS 1

//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();
//	test2("hello bit.");//ʵ�ã�����Ϊ�������ò�������
//	return 0;
//}

//#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20, 85.5};
//	//.
//	printf("%s %d %.1lf\n", s.name, s.age, s.score);//�ṹ�����.�ṹ���Ա
//	//->
//	struct Stu *ps = &s;
//	//printf("%s %d %.1lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("%s %d %.1lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->�ṹ���Ա
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 10;
//	//00000000 00000000 00000000 00001010
//	//00 00 00 0a
//	//���ŷŽ�ȥ,С�˴洢
//
//	int* pa = &a;
//	printf("%p\n", pa);//006FFDA7
//	printf("%p\n", &a);//006FFDA7
//	//ȡ��ַa,�õ��ı���a��ռ�ռ���ʼ��ַ
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344; //44 33 22 11
//	//int* pa = &a;
//	//*pa = 0; //�ı���4���ֽڵ�ֵ00 00 00 00
//
//	char* pc = &a;
//	*pc = 0; //00 33 22 11ֻ�ı���һ���ֽ�
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344; //44 33 22 11
//	//int* pa = &a;
//	//*pa = 0; //�ı���4���ֽڵ�ֵ00 00 00 00
//
//	char* pc = &a;
//	*pc = 0; //00 33 22 11ֻ�ı���һ���ֽ�
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//005CFCF0
//	printf("%p\n", pc);//005CFCF0
//	//��ĵ�ַһ��
//	printf("%p\n", pa + 1);//0113F9B8
//	printf("%p\n", pc + 1);//0113F9B5
//	//pcֻ����1���ֽ�,pa����4���ֽ�
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//���Ÿ�ֵ
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//���Ŵ�ӡ
//	int* q = &arr[9];
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *q--);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = (char*)arr;//��Ҫǿ������ת��
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int* p;
//	*p = 20;
//	return 0;
//}

//#include <stdio.h>
//int* test()
//{
//	int a = 100;
//	return &a;
//}
////a��������������,test����ʱ,a������,
////aԭ���Ŀռ仹��,ֻ��aû��Ȩ�޷���ԭ���Ŀռ���
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//100
//	printf("%d\n", *p);//���ֵ
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//0 1 2 3 4 5 6 7 8 9
//	}
//	printf("\n");
//	int* q = arr + sz - 1;
//	//int* q = &arr[sz-1];
//	
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *q--);//9 8 7 6 5 4 3 2 1 0
//	//}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(q - i));//9 8 7 6 5 4 3 2 1 0
//	}
//	//q - i ���ı�q��ֵ
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = NULL;
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	//���������±�����,��ַ�ɵ͵�������
//
//	printf("%d\n", &a[9] - &a[0]);//9
//	printf("%d\n", &a[0] - &a[9]);//-9
//	return 0;
//}

//#include <stdio.h>
//#include<string.h>
////���ַ������ȵĺ���
////1.������
//int my_strlen1(char* s)
//{
//	int count = 0;
//	while(*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//
//}
//
////2.�ݹ�
//int my_strlen2(char* s)
//{
//	int count = 0;
//	if (*s == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen2(++s);
//	}
//}
////3.ָ��-ָ��
//int my_strlen3(char* s)
//{
//	char* start = s;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - start;
//}
//int main()
//{
//	char arr[] = "abcefg";
//	int len = my_strlen2(arr);
//	printf("%d\n", len);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (size_t i = 0; i < sz; i++)
//	{
//		printf("%p\n", p + i);
//	}
//	// p + i �ȼ���&arr[i]
//
//	/*
//	00BBFC28
//	00BBFC2C
//	00BBFC30
//	00BBFC34
//	00BBFC38
//	00BBFC3C
//	00BBFC40
//	00BBFC44
//	00BBFC48
//	00BBFC4C
//	*/
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (size_t i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);//1 2 3 4 5 6 7 8 9 10
//	}
//	//p[i] �������������*(p+i)
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//int* ��pa������ *ppa��ʾ ppa��ָ��
//	int*** pppa = &ppa;//����ָ��
//	//...
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//��������-������͵�����
//	int arr1[10] = { 0 };
//	char ch[5] = { 0 };//�ַ����� - ����ַ�������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr2[5] = { &a,&b,&c };//ָ������,���ָ�������
//	//����ȫ��ʼ��,ʣ��2��ΪNULL��ָ��
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));//10 20 30
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c = a ^ b;
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if (( c & 1 )== 1)
//        {
//            count++;
//        }
//        c = c>> 1;
//    }
//    printf("%d\n", count);
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    for (int i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (a >> i) & 1);
//    }
//    printf("\n");
//    for (int i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (a >> i) & 1);
//    }
//    printf("\n");
//    return 0;
//}

#include<stdio.h>
int main()
{
    int a = 5;
    int b = 3;
    printf("a = %d b =  %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a = %d b =  %d\n", a, b);
    return 0;
}
