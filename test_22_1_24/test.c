#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stddef.h>
//
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//struct S3
//{
//	double d;
//	int i;
//	char c;
//
//};
//int main()
//{
//	printf("%d\n", (int)sizeof(struct S1));//12
//	printf("%d\n", (int)sizeof(struct S3));//16
//	printf("%d\n", (int)offsetof(struct S3, d));//0
//	printf("%d\n", (int)offsetof(struct S3, i));//4
//	printf("%d\n", (int)offsetof(struct S3, c));//8
//	//(int)�����Ų���������棬sizeof��offsetof���صĶ���size_t
//	return 0;
//}

//#include<stdio.h>
//#include<stddef.h>
//#pragma pack(1)
//struct S1
//{
//	char c1;//1 - 1 - 1
//	int i;//4 - 1 - 1
//	char c2;//1 - 1 - 1
//};
//struct S3
//{
//	double d;//1
//	int i;//1
//	char c;//1
//
//};
//int main()
//{
//	printf("%d\n", (int)sizeof(struct S1));//6
//	printf("%d\n", (int)sizeof(struct S3));//13
//	//(int)�����Ų���������棬sizeof��offsetof���صĶ���size_t
//	return 0;
//}
//#include<stdio.h>
//struct S {
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////�ṹ�崫��
//void print1(struct S s) {
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(const struct S* ps) {
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //���ṹ��
//	print2(&s); //����ַ
//	return 0;
//}

//#include<stdio.h>
//struct A {
//	int _a : 2;//a��Աֻ��Ҫ2��bitλ
//	int _b : 5;//5��bitλ
//	int _c : 10;//10��bitλ
//	int _d : 30;//30��bitλ
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	return 0;
//}

//#include<stdio.h>
//struct S 
//{
//	//1byte 8bit
//	char a : 3;//ʣ��5
//	char b : 4;//ʣ��1
//	//�ٿ�1byte
//	char c : 5;//ʣ��3
//	//�ٿ�1byte
//	char d : 4;//ʣ��1
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));//3
//	return 0;
//}
//#include<stdio.h>
//enum Day//����
//{
//    //ö�ٵĿ���ȡֵ
//    Mon,
//    Tues,
//    Wed,
//    Thur,
//    Fri,
//    Sat,
//    Sun
//};
//typedef enum Sex//�Ա�
//{
//    MALE=4,
//    FEMALE,
//    SECRET
//}Sex;
//int main()
//{
//    enum Day d = Sun;
//    Sex s = MALE;
//    printf("%d\n", MALE);//4
//    printf("%d\n", FEMALE);//5
//    printf("%d\n", SECRET);//6
//    printf("%d\n", sizeof(MALE));//4
//    return 0;
//}

//#include<stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &u);//00AFF9D8
//	printf("%p\n", &(u.c));//00AFF9D8
//	printf("%p\n", &(u.i));//00AFF9D8
//	return 0;
//}

//#include<stdio.h>
//int check_sys()
//{
//	union//ʹ������������,ֻ��һ��,����֮���������ͻ
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");//���Ϊ1 ֤����С�˴洢
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//union Un1
//{
//	char c[5];//1 - 8 ->1 VSĬ�϶�����8
//	int i;//4 - 8 ->4
//};
//union Un2
//{
//	short c[7];//2
//	int i;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un1));//8,����������4,
//	//����Ա��С��5,����4������
//	printf("%d\n", sizeof(union Un2));//16
//	//����Ա��С��14,Ҳ����4��������
//	return 0;
//}


//int main()
//{
//	//����10�����Ϳռ�
//	int* p = (int*)malloc(4000000000000000);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));//Not enough space
//	}
//	return 0;
//}

//int main()
//{
//	//����10�����Ϳռ�
//	int* p = (int*)malloc(40);//malloc���ص���void*
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));//Not enough space
//	}
//
//	//ʹ��
//	if (p)
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (size_t i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);//0 1 2 3 4 5 6 7 8 9
//		}
//	}
//
//	//�ͷ�
//	free(p);//�ͷſռ��,p����Ļ����Ǹ���ַ,����p�ͱ����Ұָ��
//	p = NULL;//�����ͷ�pָ��Ŀռ��Ҫ��p��ΪNULL
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//#include<string.h>
//
//int main()
//{
//	//����10�����Ϳռ�
//	int* p = (int*)calloc(10,sizeof(int));//calloc���ص�Ҳ��void*
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));//Not enough space
//	}
//
//	//ʹ��
//	if (p)
//	{
//		/*for (size_t i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}*/
//		for (size_t i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);//0 0 0 0 0 0 0 0 0 0
//		}
//	}
//
//	//�ͷ�
//	free(p);//�ͷſռ��,p����Ļ����Ǹ���ַ,����p�ͱ����Ұָ��
//	p = NULL;//�����ͷ�pָ��Ŀռ��Ҫ��p��ΪNULL
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main()
{
	//����10�����Ϳռ�
	int* p = (int*)realloc(NULL, 40);//realloc �����NULL �Ǿ���malloc�ȼ�
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));//Not enough space
	}

	//ʹ��
	if (p)
	{
		for (size_t i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (size_t i = 0; i < 10; i++)
		{
			printf("%d ", p[i]);//
		}
	}

	//�ͷ�
	free(p);//�ͷſռ��,p����Ļ����Ǹ���ַ,����p�ͱ����Ұָ��
	p = NULL;//�����ͷ�pָ��Ŀռ��Ҫ��p��ΪNULL
	return 0;
}