#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void menu()
{
	printf("**********************************\n");
	printf("*****  1. 顺序查找 ***************\n");
	printf("*****  2. 冒泡排序后二分查找 *****\n");
	printf("*****  0. 退出查找   *************\n");
	printf("**********************************\n");
	printf("**********************************\n");
}
void show_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Sequence_Search(int arr[], int sz, int value)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == value)
		{
			printf("找到了,所在位置是:%d\n", i + 1);
			break;
		}
	}
	if (i == sz)
	{
		printf("找不到!!请确认输入值是否正确\n");
	}
}

void Bubble_Sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void Binary_Search(int arr[], int sz, int value2)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < value2)
		{
			left = mid + 1;
		}
		else if (arr[mid] > value2)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了!!所在位置为:%d\n", mid+1);
			break;
		}
		if (left > right)
		{
			printf("找不到!!请确认输入是否有误:>\n");
		}
	}
}
int main()
{
	int arr[] = { 45,92,18,30,25,67,22,51,83,16 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("原有数据结果为:>\n");
	show_arr(arr, sz);
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("现有数据结果为:>\n");
			show_arr(arr, sz);
			printf("请输入要查找的值:>\n");
			int value1 = 0;
			scanf("%d", &value1);
			Sequence_Search(arr,sz,value1);
			break;
		case 2:
			Bubble_Sort(arr,sz);
			printf("冒泡排序完成后输出结果:>\n");
			show_arr(arr, sz);
			printf("进行二分查找,请输入要查找的值:>\n");
			int value2 = 0;
			scanf("%d", &value2);
			Binary_Search(arr, sz, value2);
			break;
		case 0:
			printf("退出查找\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
		
	} while (input);
	
	return 0;
}