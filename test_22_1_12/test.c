#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int total_Coco(int money)
//{
//	int num = money;//喝的汽水瓶数
//	int empty = money;//空瓶
//	while (empty >= 2)
//	{
//		num += empty / 2;
//		if (empty % 2 == 0)
//		{
//			empty /= 2;
//		}
//		else
//		{
//			empty = empty / 2 + 1;
//		}
//	}
//	return num;
//}
//int main() 
//{
//	int num = total_Coco(20);
//	printf("共能买到 %d 瓶汽水\n", num);
//	return 0;
//}


//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)//不希望arr内容被修改
//{
//	assert(str != NULL);//断言
//	//char* end = str;//把安全的str交给了安全的end,会报警告,end也要加const
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

//#include <stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
////*src不能被修改
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//先拷贝后++
//		//既拷贝了,又让斜杠0停止了
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "xxxxxxxxxxxxx" };
//	char arr2[] = { "hello" };
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}


#include <stdio.h>
#include<assert.h>
void Sort_even_odd(int* arr,int sz)
{
	assert( arr != NULL);
	int i = 0;
	int* left = arr;
	int* right = arr + sz - 1;
	int tmp = 0;
	while (left<right)
	{
		while (*left % 2 == 1)
		{
			left++;
		}
		while (*right % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("修改前的数组为：\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Sort_even_odd(arr,sz);
	printf("修改后的数组为：\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
