#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int total_Coco(int money)
//{
//	int num = money;//�ȵ���ˮƿ��
//	int empty = money;//��ƿ
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
//	printf("������ %d ƿ��ˮ\n", num);
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
//int my_strlen(const char* str)//��ϣ��arr���ݱ��޸�
//{
//	assert(str != NULL);//����
//	//char* end = str;//�Ѱ�ȫ��str�����˰�ȫ��end,�ᱨ����,endҲҪ��const
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
////*src���ܱ��޸�
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//�ȿ�����++
//		//�ȿ�����,����б��0ֹͣ��
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "xxxxxxxxxxxxx" };
//	char arr2[] = { "hello" };
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
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
	printf("�޸�ǰ������Ϊ��\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Sort_even_odd(arr,sz);
	printf("�޸ĺ������Ϊ��\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
