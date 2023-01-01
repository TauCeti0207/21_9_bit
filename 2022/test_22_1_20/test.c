#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//#include<stdlib.h>
//
//void GetNextval(const char* sub, int* nextval, int lenSub)
//{
//	nextval[0] = -1;
//	if (lenSub == 1)//ֻ��1��Ԫ�أ�next����ֻ�ܸ�ֵ1��
//	{
//		return;
//	}
//	nextval[1] = 0;
//	int i = 2;
//	int k = 0;//iǰһ���k
//	//ע������next�������ô�����next��������,i��û�󣬵�����i-1
//	//���㣺p[i] == p[k] --��next[i+1] = k+1
//	//�����㣺p[i-1] == p[k] --��next[i] = k+1
//	while (i < lenSub)
//	{
//		if (k == -1 || sub[i - 1] == sub[k])
//		{
//			nextval[i] = k + 1;
//			i++;
//			k++;
//		}
//		else//����ȣ�k��Ҫ�����˵�next��Ӧ���±괦���ٿ�p[i-1] == p[k]�Ƿ����
//			//���kһֱ���ˣ��˵�-1����ʱkԽ���ˣ���˵���м����Ҳ���2����ȵ��Ӵ�����next[i]=0
//		{
//			k = nextval[k];
//		}
//	}
//}
//
//
//int KMP(const char* str, const char* substr, int pos)
//{
//	assert(str && substr);
//	int lenStr = strlen(str);
//	int lenSub = strlen(substr);
//	if (lenStr == 0 || lenSub == 0)
//	{
//		return -1;
//	}
//	if (pos < 0 || pos >= lenStr)
//	{
//		return -1;
//	}
//
//	int* nextval = (int*)malloc(sizeof(int) * lenSub);//������Ӧ��С��next����
//	assert(nextval != NULL);
//
//	GetNextval(substr, nextval, lenSub);
//
//	int i = pos;//��������
//	int j = 0;//�����Ӵ�
//
//	while (i < lenStr && j < lenSub)
//	{
//		if (j == -1 || str[i] == substr[j])
//		{
//			i++;
//			j++;
//		}
//		//ע�⣬�����һ���ַ���ƥ��ʧ�ܣ�j��ص�-1�����������Խ��
//		//��ʱjǡ����Ҫ++�ص�0��iҲӦ��ָ����һ��
//		else
//		{
//			j = nextval[j];//����Ȼ��˵�next��������Ӧ��j�±�
//		}
//	}
//	free(nextval);//next�ÿ�
//	if (j >= lenSub)
//	{
//		return i - j;//�ҵ���
//	}
//	return -1;//������֮���Ҳ���
//}
//
//
//int main()
//{
//	printf("%d\n", KMP("ababcabcdabcde", "abcd", 0));//5
//	printf("%d\n", KMP("ababcabcdabcde", "abcdf", 0));//-1 �Ҳ���
//	printf("%d\n", KMP("ababcabcdabcde", "ab", 0));//0 һ��ʼ����
//	//char* (*c[10]) (int* p);
//	//char (*(*c)[10])(int* p);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//#include<stdio.h>
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[] = { 2,3,4,5,6 };
//	//int arr3[] = { 3,4,5,6,7 };
//
//	//int* arr[] = { arr1, arr2, arr3 };
//	//int i = 0;
//	//int*(*p)[3] = &arr;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);//*(*(arr+i)+j)
//	//	}
//	//	printf("\n");
//	//}
//	
//
//	int (*pf)(int x, int y ) = Add;
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int is_reverse(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src); //�ȿ���һ��
//	strcat(tmp, src); //������һ��
//	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
//}
//
//
//int main()
//{
//	char arr1[] = "ABCD";
//	char arr2[] = "CDAB";
//	int ret = is_reverse(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("arr2�ַ�����arr1�ַ�����ת֮����ַ���\n");
//	}
//	else if(ret == 0)
//	{
//		printf("arr2�ַ�������arr1�ַ�����ת֮����ַ���\n");
//	}
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
	float score;
};


int cmp_stu_by_score(const void* e1, const void* e2)
{
	if (((struct Stu*)e1) ->score > ((struct Stu*)e2)->score)
	{
		return 1;
	}
	else if (((struct Stu*)e1)->score < ((struct Stu*)e2)->score)
	{
		return -1;
	}
	else
	{
		return 0;
	}

}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	if (((struct Stu*)e1)->age > ((struct Stu*)e2)->age)
	{
		return 1;
	}
	else if (((struct Stu*)e1)->age < ((struct Stu*)e2)->age)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int cmp_int(const void* e1, const void* e2)
{
	if (*(int*)e1 > *(int*)e2)
	{
		return 1;
	}
	else if (*(int*)e1 > *(int*)e2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int cmp_ptr_arr(const void* e1, const void* e2)
{
	//e1 e2��char*�ĵ�ַ������Ҳ����char**
	char* a = *(char**)e1;
	char* b = *(char**)e2;
	int ret = strcmp(a, b);
	if (ret > 0)
	{
		return 1;
	}
	else if (ret < 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void Swap(char* buf1, char* buf2, int width)
{
	//һ���ֽ�һ���ֽڽ���
	for (int i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz-i-1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//����
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void print_stu(struct Stu arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s %d %f\n", arr[i].name, arr[i].age, arr[i].score);
	}
}

void test()
{
	struct Stu arr[] = { {"����",18,88},{"����",28,89},{"����",38,99} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_score);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);

	print_stu(arr, sz);
}
void test2()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

void test3()//�ַ�ָ������
{
	char* arr[5] = { "i", "love", "c", "programming", "language" };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_ptr_arr);
	for (int i = 0; i < sz; i++)
	{
		printf("%s\n", arr[i]);
	}
}
int main()
{
	test3();
	return 0;
}