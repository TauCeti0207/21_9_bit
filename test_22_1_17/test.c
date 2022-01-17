////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
//////int main()
//////{
//////	char arr[5];
//////	char(*pa)[5] = &arr;
//////
//////	int* parr[6];//指针数组
//////	int* (*pp)[6] = &parr;//指向指针数组的指针
//////	//pp类型： int* (*)[6]
//////	//(*pp) *先与pp结合，说明pp是指针
//////	return 0;
//////}
////
//////数组指针有什么用？
////
//////int main()
//////{
//////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//////	int*p = arr;
//////	int i = 0;
//////	for (i = 0; i < 10; i++)
//////	{
//////		printf("%d ", *(p + i));//1 2 3 4 5 6 7 8 9 10
//////	}
//////
//////	return 0;
//////}
////
//////int main()
//////{
//////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//////	int (*p)[10] = &arr;
//////	int i = 0;
//////	for (i = 0; i < 10; i++)
//////	{
//////		printf("%d ", *((*p) + i));//1 2 3 4 5 6 7 8 9 10
//////	}
//////	//*p表示arr
//////	return 0;
//////}
////
//////void print(int a[3][5], int r, int c)
//////{
//////	int i = 0;
//////	int j = 0;
//////	for (i = 0; i < r; i++)
//////	{
//////		for (j = 0; j < c; j++)
//////		{
//////			printf("%d ", a[i][j]);
//////		}
//////		printf("\n");
//////	}
//////}
////
//////int(*p)[5]是数组指针
////
////void print(int(*p)[5], int r, int c)
////{
////	int i = 0;
////	for (i = 0; i < r; i++)
////	{
////		int j = 0;
////		for (j = 0; j < c; j++)
////		{
////			//*(p+i) 相当于拿到了二维数组的第i行，也相当于第i行的数组名
////			//数组名表示首元素的地址，其实也是第i行第一个元素的地址
////			printf("%d ", *(*(p + i) + j));
////			//               p[i][j]
////			//p是第一行的地址
////			//p+i是第i行的地址
////			//*(p+i) 是第i行第一个元素的地址
////			//
////		}
////		printf("\n");
////	}
////}
////
////int main()
////{
////	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
////	print(arr,3,5);
////
////	return 0;
////}
////
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	int ret = 0;
////	do
////	{
////		menu();
////		printf("请选择:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("输入2个操作数:>");
////			scanf("%d %d", &x, &y);
////			ret = Add(x, y);
////			printf("ret = %d\n", ret);
////			break;
////		case 2:
////			printf("输入2个操作数:>");
////			scanf("%d %d", &x, &y);
////			ret = Sub(x, y);
////			printf("ret = %d\n", ret);
////			break;
////		case 3:
////			printf("输入2个操作数:>");
////			scanf("%d %d", &x, &y);
////			ret = Mul(x, y);
////			printf("ret = %d\n", ret);
////			break;
////		case 4:
////			printf("输入2个操作数:>");
////			scanf("%d %d", &x, &y);
////			ret = Div(x, y);
////			printf("ret = %d\n", ret);
////			break;
////		case 0:
////			printf("退出计算器\n");
////			break;
////		default:
////			printf("选择错误\n");
////			break;
////		}
////	} while (input);
////
////	return 0;
////}
//
////#include<stdio.h>
////int my_test(const char* s)
////{
////    printf("测试通过函数指针调用函数\n");
////    return 0;
////}
////int main()
////{
////    int (*pf)(const char* s) = my_test;
////    pf("hehe");
////    return 0;
////}
//
//#include<stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	//趟数
//	for ( i = 0; i < sz-1; i++)
//	{
//		//每一趟冒泡排序的过程  
//		//10元素 9躺 比较8对
//		//需要比较的对数每一趟-1
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j+1] < arr[j])//升序
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,4,2,7,3,5,6,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//比较e1和e2指向的元素

void bubble_qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2));

int cmp_int(const void* e1, const void* e2)
{
	/*if (*(int*)e1 > *(int*)e2)
		return 1;
	else if (*(int*)e1 < *(int*)e2)
		return -1;
	else
		return 0;*/

	//可以简写成
	return *(int*)e1 - *(int*)e2;//默认是升序，如果e1和e2调换则能改成降序
}
void test1()
{
	int arr[] = { 1,4,2,7,3,5,6,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


struct Stu
{
	char name[20];
	int age;
	float score;
};


int cmp_stu_by_score(const void* e1, const void* e2)
{
	//浮点数相减会出现问题

	if (((struct Stu*)e1)->score > ((struct Stu*)e2)->score)
		return 1;
	else if (((struct Stu*)e1)->score < ((struct Stu*)e2)->score)
		return -1;
	else
		return 0;
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}


int cmp_stu_by_name(const void* e1, const void* e2)
{
	//李四最小 l < w < z
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void print_stu(struct Stu arr[], int sz)
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%s %d %f\n", arr[i].name, arr[i].age, arr[i].score);
	}
}
//测试qsort排序结构体数据
void test2()
{
	struct Stu arr[] = { {"张三",20,87.5f},{"李四",21,99.0f},{"王五",22,67.5f} };
	//假设按照成绩来排序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_score);
	//bubble_qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	print_stu(arr, sz);
}



void Swap(char* buf1, char* buf2, int width)
{
	//一对字节一对字节交换
	for (size_t i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}



void bubble_qsort(void* base, int sz, int width, int(*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	int j = 0;
	//趟数
	for ( i = 0; i < sz-1; i++)
	{
		//每一趟冒泡排序的过程  
		//10元素 9躺 比较8对
		//需要比较的对数每一趟-1
		for (j = 0; j < sz-1-i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j+1) * width) > 0)//升序
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}



void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	test2();
	return 0;
}