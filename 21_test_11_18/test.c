#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char a = 5;
//	char b = 126;
//	char c = a + b;
//	printf("%d\n", c);//���Ϊʲô��-125?
//	return 0;
//}

//int main()
//{
//	test();//() - �������ò�����
//	int ret = Add(2, 3);
//
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20, 85.5};
//	//.
//	printf("%s %d %.1lf\n", s.name, s.age, s.score);//�ṹ�����.�ṹ���Ա
//	//->
//	struct Stu * ps = &s;
//	//printf("%s %d %.1lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("%s %d %.1lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->�ṹ���Ա
//
//	return 0;
//}
//
//
//int main()
//{
//	char a = 5;
//	//�ض�
//	//00000000000000000000000000000101
//	//00000101
//
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110
//
//	//00000000000000000000000000000101 - a
//	//00000000000000000000000001111110 - b
//	//00000000000000000000000010000011
//	//10000011 - c
//	//��a��b��ӵ�ʱ��a��b����char����
//	//���ʽ������Ǿ�Ҫ������������
//	//
//	char c = a + b;
//	//10000011 - c
//	//11111111111111111111111110000011 - ����
//	//11111111111111111111111110000010
//	//10000000000000000000000001111101 -> -125
//	printf("%d\n", c);//?
//
//	return 0;
//}


//ʵ��1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	float f = 5.5;
//	float r = a + f;//����ת��
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	a + b;//���ʽ��2�����ԣ�ֵ���ԣ���������
//	//30 ����ֵ����
//	//int ��������
//
//	return 0;
//}

//int main()
//{
//	short s = 20;
//	int a = 5;
//	printf("%d\n", sizeof(s = a + 4));//?
//	printf("%d\n", s);//?
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	////int c = a + b * 10;//���ȼ�
//	//int c = a + b + 10;//���ڲ����������ȼ���ͬ������£������˵����
//
//	//���ʽ2
//	//int c = 5;
//
//	//5 +  4 = 9
//	//4 +  4 = 8
//	//c + --c;//�������
//
//
//
//	return 0;
//}



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
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int count_number_of_1(int n)
//{
//	int count = 0;
//	//ֻҪ2��������1�Ͳ�������0
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;//n�����ڴ��в����2������1�ĸ���
//	int ret = count_number_of_1(n);
//	printf("%d\n", ret);//32
//	return 0;
//}

//#include <stdio.h>
//int count_number_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n &= n - 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 15;//n�����ڴ��в����2������1�ĸ���
//	int ret = count_number_of_1(n);
//	printf("%d\n", ret);//32
//	return 0;
//}

//#include <stdio.h>
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((m & 1) != (n & 1))
//		{
//			count++;
//		}
//		m >>= 1;
//		n >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 1999;
//	int m = 2299;
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);//7
//	return 0;
//}

//#include <stdio.h>
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp &= tmp - 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 1999;
//	int m = 2299;
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);//7
//	return 0;
//}


//#include <stdio.h>
//void print(int m)
//{
//	//00000000000000000000000000000101
//	//��ӡ����λ
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)//��1λ����0λ,��31λ����30λ
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)//��2λ����1λ,��32λ����31λ
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//#include <stdio.h>
//void print(int m)
//{
//	//00000000000000000000000000000101
//	//��ӡ����λ
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)//��1λ����0λ,��31λ����30λ
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)//��2λ����1λ,��32λ����31λ
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//#include <stdio.h>
//int i;//ȫ�ֱ���,Ĭ��Ϊ0
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int i;//ȫ�ֱ���,Ĭ��Ϊ0
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n % 2 == 0)
//        {
//            printf("Even\n");
//        }
//        else
//        {
//            printf("Odd\n");
//        }
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    char v[] = "AaEeIiOoUu";
//    char ch = 0;
//    int i = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == v[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//        //��������
//        getchar();//����\n
//    }
//    return 0;
//}


#include<stdio.h>
//����һ��ѧ���Ľṹ������
struct Stu
{
    char name[20];
    int age;
    float score;
}Stu;
int main()
{
    
    return 0;
}