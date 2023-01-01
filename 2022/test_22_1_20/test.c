#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//#include<stdlib.h>
//
//void GetNextval(const char* sub, int* nextval, int lenSub)
//{
//	nextval[0] = -1;
//	if (lenSub == 1)//只有1个元素，next数组只能赋值1个
//	{
//		return;
//	}
//	nextval[1] = 0;
//	int i = 2;
//	int k = 0;//i前一项的k
//	//注意手算next数组与用代码算next数组区别,i还没求，得先求i-1
//	//手算：p[i] == p[k] --》next[i+1] = k+1
//	//代码算：p[i-1] == p[k] --》next[i] = k+1
//	while (i < lenSub)
//	{
//		if (k == -1 || sub[i - 1] == sub[k])
//		{
//			nextval[i] = k + 1;
//			i++;
//			k++;
//		}
//		else//不相等，k需要往回退到next对应的下标处，再看p[i-1] == p[k]是否成立
//			//如果k一直回退，退到-1，此时k越界了，且说明中间是找不到2段相等的子串，即next[i]=0
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
//	int* nextval = (int*)malloc(sizeof(int) * lenSub);//开辟相应大小的next数组
//	assert(nextval != NULL);
//
//	GetNextval(substr, nextval, lenSub);
//
//	int i = pos;//遍历主串
//	int j = 0;//遍历子串
//
//	while (i < lenStr && j < lenSub)
//	{
//		if (j == -1 || str[i] == substr[j])
//		{
//			i++;
//			j++;
//		}
//		//注意，如果第一个字符就匹配失败，j会回到-1，会产生数组越界
//		//此时j恰好需要++回到0，i也应该指向下一个
//		else
//		{
//			j = nextval[j];//不相等回退到next数组中相应的j下标
//		}
//	}
//	free(nextval);//next置空
//	if (j >= lenSub)
//	{
//		return i - j;//找到了
//	}
//	return -1;//遍历完之后都找不到
//}
//
//
//int main()
//{
//	printf("%d\n", KMP("ababcabcdabcde", "abcd", 0));//5
//	printf("%d\n", KMP("ababcabcdabcde", "abcdf", 0));//-1 找不到
//	printf("%d\n", KMP("ababcabcdabcde", "ab", 0));//0 一开始就有
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
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再连接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
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
//		printf("arr2字符串是arr1字符串旋转之后的字符串\n");
//	}
//	else if(ret == 0)
//	{
//		printf("arr2字符串不是arr1字符串旋转之后的字符串\n");
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
	//e1 e2是char*的地址，类型也就是char**
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
	//一对字节一对字节交换
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
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//升序
			{
				//交换
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
	struct Stu arr[] = { {"张三",18,88},{"李四",28,89},{"王五",38,99} };
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

void test3()//字符指针数组
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