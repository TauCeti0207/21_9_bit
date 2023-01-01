#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void left_move(char* str, int k)
//{
//	
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//void reverse(char* left, char* right)
//{
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void left_move(char* str, int k)
//{
//	int len = strlen(str);
//	k %= len;//防止k越界，左旋10个字符与左旋6个字符一样
//	reverse(str, str + k - 1);//前k个字符
//	reverse(str + k, str + len - 1);//后面一段
//	reverse(str, str + len - 1);//整体逆序
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//void find_int_arr(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (y >= 0 && x <= *px-1)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	int x = 3;
//	int y = 3;
//	scanf("%d", &k);
//	//参数是返回型参数
//	find_int_arr(arr, &x, &y, k);
//	if (x == -1 && y == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是:%d %d\n", x, y);
//	}
//	return 0;
//}

//void left_move(char* str, int k)
//{
//	int len = strlen(str);
//	k %= len;//防止k越界，左旋10个字符与左旋6个字符一样
//	reverse(str, str + k - 1);//前k个字符
//	reverse(str + k, str + len - 1);//后面一段
//	reverse(str, str + len - 1);//整体逆序
//}



//void left_move(char* str, int k)
//{
//
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//
//
//int is_left_move(char* arr1, char* arr2)
//{
//	int length = strlen(arr1);
//	for (size_t i = 0; i < length; i++)
//	{
//		left_move(arr1, 1);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}


//int is_left_move(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)//长度相等才能判断
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1,arr2))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCD";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("arr2字符串是arr1字符串旋转之后的字符串\n");
//	}
//	else if (ret == 0)
//	{
//		printf("arr2字符串不是arr1字符串旋转之后的字符串\n");
//	}
//	return 0;
//}
#include<assert.h>
//int my_strlen(char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	printf("%d\n", my_strlen(arr1));
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*src!=0)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//拷贝\0
//	return ret;
//}
//
//int main()
//{
//	char arr2[] = "abcdef";
//	char arr1[] = "xxxxxxxxxxxx";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == 0)
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 > *arr2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}


//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//先找到dest空间的\0
//	while (*dest != 0)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "abd";
//	printf("%s\n", my_strcat(arr1, arr2));//-1
//	return 0;
//}

char* my_strstr(char* str, const char* substr)
{
	const char* s1 = str;
	const char* s2 = substr;
	const char* cur = str;
	assert(str && substr);
	if (*substr == 0)
	{
		return (char*)str;
	}
	while (*cur != 0)
	{
		s1 = cur;
		s2 = substr;
		while (*s1 != 0 && *s2 != 0 && *s1==*s2)
		{
			s1++;
			s2++;
		}

		if (*s2==0)
		{
			return (char*)cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbbcdefbbcdef";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if (NULL == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s\n", ret);//bbcdefbbcdef
	}
	return 0;
}