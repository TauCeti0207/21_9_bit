#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2},{2,2},{3,3,3} };
//	int arr[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2},{2,2},{3,3,3} };
//	int arr[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	return 0;
//}




//#include <stdio.h>
////void bubble_sort(int* arr,int sz) 这样写也可以 
////指针大小是4,不能在函数内算数组元素个数
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//数组传参
//	int arr[] = { 3,1,5,2,4,9,0,7,6,8 };
//	//设计一个函数对arr数组进行排序-冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//数组名代表的就是数组
//	//数组传参,实际上传过去的不是整个数组,传过去的是数组首元素地址
//	//避免空间浪费,只需要传首元素地址,就能依据地址找到所有元素
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
////void bubble_sort(int* arr,int sz) 这样写也可以 
////指针大小是4,不能在函数内算数组元素个数
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		//一趟冒泡排序比较的对数
//		//第二趟比较8对,第三躺比较7对
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%n\n", sizeof(arr));
//	//sizeof是例外
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("%d\n", sizeof(arr));
//	//sizeof是例外
//	return 0;
//}
////00D3FCA8
////00D3FCA8
////00D3FCA8
////20
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1); //跳过4字节
//	printf("%p\n", &arr+1); //跳过一整个数组,20字节
//	//sizeof是例外
//	return 0;
//}
//00AFF92C
//00AFF92C
//00AFF92C
//20
//00AFF930
//00AFF930
//00AFF940


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1); //跳过4字节
//	printf("%p\n", &arr + 1); //跳过一整个数组,20字节
//	//sizeof是例外
//	return 0;
//}

//#include<stdio.h>
//void bubble_sort(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("交换前%d ", arr[i]);
//	}
//	bubble_sort(arr, sz);
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("交换后%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//void init(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
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
//	printf("\n");
//	reverse(arr, sz);
//	print(arr, sz);
//	printf("\n");
//	init(arr, sz);
//	print(arr,sz);
//	return 0;
//}

#include<stdio.h>
void array_swap(int arr1[], int arr2[],int sz)
{
	int arr3[10] = { 0 };
	for (int i = 0; i < sz; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < sz; i++)
	{
		arr1[i] = arr2[i];
	}
	for (int i = 0; i < sz; i++)
	{
		arr2[i] = arr3[i];
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	array_swap(arr1, arr2, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}