////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
//////int main()
//////{
//////	char arr[5];
//////	char(*pa)[5] = &arr;
//////
//////	int* parr[6];//ָ������
//////	int* (*pp)[6] = &parr;//ָ��ָ�������ָ��
//////	//pp���ͣ� int* (*)[6]
//////	//(*pp) *����pp��ϣ�˵��pp��ָ��
//////	return 0;
//////}
////
//////����ָ����ʲô�ã�
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
//////	//*p��ʾarr
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
//////int(*p)[5]������ָ��
////
////void print(int(*p)[5], int r, int c)
////{
////	int i = 0;
////	for (i = 0; i < r; i++)
////	{
////		int j = 0;
////		for (j = 0; j < c; j++)
////		{
////			//*(p+i) �൱���õ��˶�ά����ĵ�i�У�Ҳ�൱�ڵ�i�е�������
////			//��������ʾ��Ԫ�صĵ�ַ����ʵҲ�ǵ�i�е�һ��Ԫ�صĵ�ַ
////			printf("%d ", *(*(p + i) + j));
////			//               p[i][j]
////			//p�ǵ�һ�еĵ�ַ
////			//p+i�ǵ�i�еĵ�ַ
////			//*(p+i) �ǵ�i�е�һ��Ԫ�صĵ�ַ
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
////		printf("��ѡ��:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("����2��������:>");
////			scanf("%d %d", &x, &y);
////			ret = Add(x, y);
////			printf("ret = %d\n", ret);
////			break;
////		case 2:
////			printf("����2��������:>");
////			scanf("%d %d", &x, &y);
////			ret = Sub(x, y);
////			printf("ret = %d\n", ret);
////			break;
////		case 3:
////			printf("����2��������:>");
////			scanf("%d %d", &x, &y);
////			ret = Mul(x, y);
////			printf("ret = %d\n", ret);
////			break;
////		case 4:
////			printf("����2��������:>");
////			scanf("%d %d", &x, &y);
////			ret = Div(x, y);
////			printf("ret = %d\n", ret);
////			break;
////		case 0:
////			printf("�˳�������\n");
////			break;
////		default:
////			printf("ѡ�����\n");
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
////    printf("����ͨ������ָ����ú���\n");
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
//	//����
//	for ( i = 0; i < sz-1; i++)
//	{
//		//ÿһ��ð������Ĺ���  
//		//10Ԫ�� 9�� �Ƚ�8��
//		//��Ҫ�ȽϵĶ���ÿһ��-1
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j+1] < arr[j])//����
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
//�Ƚ�e1��e2ָ���Ԫ��

void bubble_qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2));

int cmp_int(const void* e1, const void* e2)
{
	/*if (*(int*)e1 > *(int*)e2)
		return 1;
	else if (*(int*)e1 < *(int*)e2)
		return -1;
	else
		return 0;*/

	//���Լ�д��
	return *(int*)e1 - *(int*)e2;//Ĭ�����������e1��e2�������ܸĳɽ���
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
	//������������������

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
	//������С l < w < z
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
//����qsort����ṹ������
void test2()
{
	struct Stu arr[] = { {"����",20,87.5f},{"����",21,99.0f},{"����",22,67.5f} };
	//���谴�ճɼ�������
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_score);
	//bubble_qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	print_stu(arr, sz);
}



void Swap(char* buf1, char* buf2, int width)
{
	//һ���ֽ�һ���ֽڽ���
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
	//����
	for ( i = 0; i < sz-1; i++)
	{
		//ÿһ��ð������Ĺ���  
		//10Ԫ�� 9�� �Ƚ�8��
		//��Ҫ�ȽϵĶ���ÿһ��-1
		for (j = 0; j < sz-1-i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j+1) * width) > 0)//����
			{
				//����
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