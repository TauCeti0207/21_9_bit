#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
//    printf("%d\n", Fun(2));
//    printf("%d\n", Fun(4));
//}

//#include<stdio.h>
//#include<string.h>
//int My_strlen2(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + My_strlen2(++s);
//}
//int My_strlen1(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
////非递归版本
//void reverse_string1(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	//交换
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
////交换ag + 逆序bcdef 大事化小
////递归版本1
//void reverse_string2_1(char* arr, int len)
//{
//	if (len >= 2)
//	{
//		int tmp = arr[0];
//		arr[0] = arr[len - 1];
//		arr[len - 1] = tmp;
//		reverse_string2_1(++arr, len -= 2);
//	}
//}
////递归版本2
//void reverse_string2_2(char* arr)
//{
//	int len = My_strlen2(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';//g的位置先放\0
//	if(My_strlen1(arr + 1) > 1)	//递归必须有终止条件
//		reverse_string2_2(arr + 1);
//	*(arr + len - 1) = tmp;
//}
////参数用指针的形式
//void reverse_string3(char* str)
//{
//	char* left = str;
//	char* right = str + My_strlen1(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%s\n", arr);
//	int len = My_strlen2(arr);
//	reverse_string2_1(arr, len);
//	printf("%s\n", arr);
//	reverse_string1(arr);
//	printf("%s\n", arr);
//	reverse_string2_2(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//#include<stdio.h>
//
//int DigtSum(size_t n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else
//	{
//		return DigtSum(n / 10) + n % 10;
//	}
//}
//int main()
//{
//	size_t num = 0; //unsigned int
//	scanf("%u", &num);
//	printf("%d\n", DigtSum(num));
//	return 0;
//}


//#include<stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
////2 -3
////0.125000
//#include <stdio.h>
//int main()
//{
//    //注意逗号表达式
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}




//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置
//#include<stdio.h>
//void init(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[10], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a = 5;
//	int b = a << 2;
//	printf("%d\n", b);//20
//	printf("%d\n", a);//5
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 5;
//	int b = a >> 1;
//	printf("%d\n", b);//2  0010
//	printf("%d\n", a);//5  0101
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 5;
//	int b = a >> 1;
//	printf("%d\n", b);//2  0010
//	printf("%d\n", a);//5  0101
//}

#include <stdio.h>

int main()
{
	int a = 3;
	int b = -5;
	int c = a & b; 
	printf("%d\n", c);
}