#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
////����һ��ѧ���Ľṹ������
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//struct Stu
//{
//	struct S ss;
//	char name[20];
//	int age;
//	float score;
//}s1, s2;//s1,s2��2���ṹ���������ȫ�ֵ�
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	struct Stu s = { {100, 'w', 3.14}, "zhansan", 20, 95.5f};//����һ���ṹ��������ֲ���
//	printf("%d %c %lf %s %d %f\n",s.ss.a, s.ss.c, s.ss.d, s.name, s.age, s.score);
//
//	return  0;
//}

//#include<stdio.h>
//struct  S
//{
//	int arr[1000];
//	float f;
//	char ch[100];
//};
//
//void print1(struct S tmp)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("\n");
//	printf("%f\n", tmp.f);
//	printf("%s\n", tmp.ch);
//}
//
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("%f\n", ps->f);
//	printf("%s\n", ps->ch);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,10}, 5.5f, "hello" };
//	print1(s);//��ֵ���� ���ٴ���һ����ʱ�ռ�,�β���ʵ�ε�һ����ʱ����
//	//�ռ��˷ѱȽ�����
//
//	print2(&s);//��ַ����
//
//	return  0;
//}


//#include<stdio.h>
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//������٣�
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	return 0;
}