#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	char ch = '0';
//	if (ch >= '0' && ch <= '9')
//	{
//		//...
//	}
//	if (isdigit(ch))
//	{
//		//...��������Ÿ���ͳһ
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	if (islower(ch))
//	{
//		ch = toupper(ch);
//	}
//	else
//	{
//		ch = tolower(ch);
//	}
//	printf("%c\n", ch);
//	return 0;
//}
// 
//#include<stdio.h>
//#include<ctype.h>
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//    void* ret = dest;
//    assert(dest && src);
//    while (num--)
//    {
//        *(char*)dest = *(char*)src;//ǿ������ת��ֻ����ʱ�ģ������ı�dest������
//        dest = (char*)dest + 1;;//void*����ֱ��++
//        src = (char*)src + 1;
//    }
//    return ret;
//}
//
//#include<stdio.h>
//#include<memory.h>
//#include<string.h>
//#include<assert.h>
//
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//    void* ret = dest;
//    assert(dest && src);
//
//    //��ǰ��󿽱�
//    if (dest < src)
//    {
//        while (num--)
//        {
//            *(char*)dest = *(char*)src;
//            dest = (char*)dest + 1;
//            src = (char*)src + 1;
//        }
//    }
//
//    //�Ӻ���ǰ����
//    else
//    {
//        while (num--)//20�ͱ��19
//        {
//            *((char*)dest + num) = *((char*)src + num);
//        }
//    }
//    return ret;
//}
//void test1()
//{
//    //��arr3�е�12345�����ŵ�34567��
//    int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr4[5] = { 0 };
//    my_memmove(arr3+2, arr3, 5 * sizeof(arr3[0]));
//    for (size_t i = 0; i < 10; i++)
//    {
//        printf("%d ", arr3[i]);//1 2 1 2 3 4 5 8 9 10
//    }
//}
//int main()
//{
//   
//    test1();
//    return 0;
//}

//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);//0	ǰ8���ֽڶ���ȷ���0
//	return 0;
//}
//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	char arr[20] = { 0 };
//	memset(arr, 'x', 10);//ǰ10���ַ����ĳ�x
//	for (size_t i = 0; i < 20; i++)
//	{
//		printf("%c ", arr[i]);//x x x x x x x x x x
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr, 0, 10);
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//0 0 0 4 5 6 7 8 9 10
//	}
//	//01 00 00 00	02 00 00 00	 03 00 00 00 ...С�˴洢
//	//00 00 00 00   00 00 00 00  00 00 00 00 ...
//	return 0;
//}

//struct Stu
//{
//    char name[20];
//    int age;
//    char sex[5];
//    int hight;
//}s2,s3,s4;//ȫ�ֱ���
//
//struct Stu s5;//ȫ�ֱ���
//
//int main()
//{
//    struct Stu s1;//�ṹ��������ֲ�����
//    return 0;
//}

//����3
typedef struct
{
	int data;
	Node* next;
}Node;
//����д���룬���з�
int main()
{
	Node n;//����
	return 0;
}