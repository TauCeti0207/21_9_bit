#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//add(int* p)
//{
//	*p = *p + 1;
//}
////ͨ��ָ�뽨����ϵ
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//}

//#include<stdio.h>
//int add(int n)
//{
//	n++;
//	return n;
//}
////ͨ��ָ�뽨����ϵ
//int main()
//{
//	int num = 0;
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//}
//#include<stdio.h>
//int add(int n)
//{
//	//n++;
//	return ++n;
//}
////ͨ��ָ�뽨����ϵ
//int main()
//{
//	int num = 0;
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//}

//#include<stdio.h>
//int add(int n)
//{
//	//n++;
//	return n+1;
//}
////ͨ��ָ�뽨����ϵ
//int main()
//{
//	int num = 0;
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//}

//������������
//void - �޷���
//char int float ����ĳ������

//#include<stdio.h>
//void test1()
//{
//	int n = 5;
//	printf("hehe\n");
//	if (n == 5)
//	{
//		return; //����ֻдreturn ������i�κ�ֵ
//	}
//	printf("haha\n");
//}
//int test2()
//{
//	return 1;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//#include<stdio.h>
////void test2()
////{
////	void test1()
////	{
////		
////	}
////}
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d",printf("%d ",43)));
//	return 0;
//}
//4321
//Return Value
//Each of these functions returns the number of characters printed, or a negative value if an error occurs.


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
////}
//#include<stdio.h>
//#include"add.h"
//#pragma comment(lib,"test_21_11_8_add.lib")
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//}

//Print 1234
//Print 123 + 4  ��123ÿһλ��4
//Print 12 + 3 + 4  ��12ÿһλ�ٴ�3��4
//Print 1 + 2 + 3 4

//#include<stdio.h>
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10); //��ӡ123 ÿһλ 1 2 3
//	}
//	printf("%d ", n % 10); //��ӡ4
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//%10/10 �õ����ǵ���
//	Print(num);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//���ַ������� strlen
//	char arr[] = "abc";
//	printf("%d\n", strlen(arr));
//	return 0;
//}

////����������ʱ����
//#include<stdio.h>
//int My_strlen(char* s)
//{
//	int count = 0;//count ����ʱ���� ������Ҫ��
//	while (*s != '\0')
//	{
//		count++;
//		s++;//char*ָ���һ ����һ���ַ�
//	}
//	return count;
//}
//int main()
//{
//	//���ַ������� strlen
//	char arr[] = "abc";
//	//a b c \0 �����ŵ����� ��Ԫ�ص�ַ
//	printf("%d\n", My_strlen(arr));
//	return 0;
//}

//����������ʱ����
//#include<stdio.h>
//int My_strlen1(char* s)
//{
//	int count = 0;//count ����ʱ���� ������Ҫ��
//	while (*s != '\0')
//	{
//		count++;
//		s++;//char*ָ���һ ����һ���ַ�
//	}
//	return count;
//}
////my_strlen("abc")
////1 + my_strlen("bc")
////1 + 1 + my_strlen("c")
////1 + 1 + 1 + my_strlen("")
////1 + 1 + 1 + 0 = 3
////����һ���ַ�
//int My_strlen2(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + My_strlen2(s+1);
//}
//int main()
//{
//	//���ַ������� strlen
//	char arr[] = "abc";
//	//a b c \0 �����ŵ����� ��Ԫ�ص�ַ
//	printf("%d\n", My_strlen1(arr));
//	printf("%d\n", My_strlen2(arr));
//	return 0;
//}


//

//#include<stdio.h>
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//n = 1/2 ����ѭ��ֱ�ӷ���1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//n = 1/2 ����ѭ��ֱ�ӷ���1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//int My_strlen1(char* s)
//{
//	int count = 0;//count ����ʱ���� ������Ҫ��
//	while (*s != '\0')
//	{
//		count++;
//		s++;//char*ָ���һ ����һ���ַ�
//	}
//	return count;
//}
//my_strlen("abc")
//1 + my_strlen("bc")
//1 + 1 + my_strlen("c")
//1 + 1 + 1 + my_strlen("")
//1 + 1 + 1 + 0 = 3
//����һ���ַ�
//int My_strlen2(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + My_strlen2(++s);
//}
//int main()
//{
//	//���ַ������� strlen
//	char arr[] = "abc";
//	//a b c \0 �����ŵ����� ��Ԫ�ص�ַ
//	printf("%d\n", My_strlen1(arr));
//	printf("%d\n", My_strlen2(arr));
//	return 0;
//}
//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//		printf("%d ", n%10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
////	return 0;
//}

//#include<stdio.h>
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int My_strlen1(char* s)	//�ǵݹ�ʵ��
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int My_strlen2(char* s)	//�ݹ�ʵ��
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + My_strlen2(++s);
//}
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", My_strlen1(arr));
//	printf("%d\n", My_strlen2(arr));
//	return 0;
//}
//#include<stdio.h>
//int My_strlen2(char* s)	//�ݹ�ʵ��
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + My_strlen2(++s);
//}
//void reverse_string(char* arr,int len)
//{
//	if (len >= 2)
//	{
//		int tmp = arr[0];
//		arr[0] = arr[len - 1];
//		arr[len - 1] = tmp;
//		reverse_string(++arr, len-=2);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	int len = My_strlen2(arr);
//	reverse_string(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}
//
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	return DigitSum(n / 10) + n % 10;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("sum = %d\n", DigitSum(n));
//	return 0;
//}

//#include<stdio.h>
//int power(int n, int k)
//{
//	if (k <= 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * power(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	printf("%d\n", power(n, k));
//	return 0;
//}

//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//n = 1/2 ����ѭ��ֱ�ӷ���1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}
