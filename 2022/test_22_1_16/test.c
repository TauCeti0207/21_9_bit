#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void left_reverse(char* arr, int k)
//{
//	char* left = arr;
//	int len = strlen(arr);
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = arr[0];//临时存放第一个元素
//		for (int j = 0;  j < len-1;  j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	printf("%s\n", arr);
//	int k = 0;
//	scanf("%d", &k);
//	left_reverse(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//#include<stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//
//
//struct Point find_key(int arr[3][3], int row, int col, int key)
//{
//	int x = 0;
//	int y = col - 1;//先从右上角开始找
//	struct Point ret = { -1, -1 };
//	while ((x<=2)&&(y>=0))
//	{
//		if (arr[x][y] == key)
//		{
//			ret.x = x;
//			ret.y = y;
//			return ret;
//		}
//		else if (arr[x][y] > key)//第三列最小都比key大
//		{
//			y--;
//		}
//		else//第一行最大都比key小
//		{
//			x++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	int key = 0;
//	printf("请输入要查找的值:\n");
//	scanf("%d", &key);
//	struct Point ret = find_key(arr, 3, 3, key);
//	if ((ret.x != -1) && (ret.y != -1))
//	{
//		printf("找到了,坐标是:%d %d\n", ret.x, ret.y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
    char x = 0;
    while ("scanf("",&x) != EOF")
    {

    }
    return 0;
}