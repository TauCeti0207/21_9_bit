#define _CRT_SECURE_NO_WARNINGS 1
//int Add(int x, int y)
//{
//	int z = 0;//�˴���zҲ��ֲ�����
//}
//int main()
//{
//	int a = 0;//aҲ��ֲ�����
//	return 0;
//}



//int main()
//{
//
//	return 0;
//}

//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//        return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    //����
//    int ret = 0;
//    scanf("%d", &ret);
//    if (ret % 5 == 0)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char int1 = 1;
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n1 = 0;
//    int n2 = 0;
//    int max = 0;
//    return 0;
//}
//#include<stdio.h>
//int Div(int x, int y)
//{
//    return x / y;
//}
//int Mod(int x, int y)
//{
//    return x % y;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", Div(a, b), Mod(a, b));
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a/b,a%b);
//    return 0;
//}

#include<stdio.h>
//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}







////�ؼ���static
//void test()//void ��ʾ����Ҫ���������κ�ֵ
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//		//0-9��������,10����������
//		//ѭ��10��
//	}
//	return 0;
//}
////������?  10��2

////�ؼ���static
//void test()//void ��ʾ����Ҫ���������κ�ֵ
//{
//	static int a = 1; //ʹ��static���ξֲ�����
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//		//0-9��������,10����������
//		//ѭ��10��
//	}
//	return 0;
//}
////������?  2 3 4 5 6 7 8 9 10 11 


//�����ʹ�����������ļ�(�ⲿ�ļ�)��ȫ�ֱ���,��Ҫ����һ��
extern int g_val;
//extern��һ���ؼ���,ר�����������ⲿ���ŵ�
//g_val��add.c�ļ�������
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


////Add���ⲿ����,��������
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}



////define�����ʶ������
//#define M 100
//#define STR "hehe"
//int main()
//{
//	printf("%d\n", M);
//	printf("%s\n", STR);
//	return 0;
//}
//

////#define �����
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	//aҪ���ڴ��п��ٿռ�
//	//a������,ռ4���ֽ�
//	printf("%p\n", &a);
//	//��ӡ��a�ĵ�ַ
//	//��δ洢a�ĵ�ַ��
//	int* p = &a;//p����ָ�����
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//aҪ���ڴ��п��ٿռ�
//	//a������,ռ4���ֽ�
//	printf("%p\n", &a);
//	//��ӡ��a�ĵ�ַ
//	//��δ洢a�ĵ�ַ��
//	int* p = &a;//p����ָ�����
//	*p = 20;//�˴���*�ǽ����ò�����
//	printf("%d\n", a);//��ʱa����20
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	//aҪ���ڴ��п��ٿռ�
//	//a������,ռ4���ֽ�
//	printf("%p\n", &a);
//	//��ӡ��a�ĵ�ַ
//	//��δ洢a�ĵ�ַ��
//	int* p = &a;//p����ָ�����
//	*p = 20;//�˴���*�ǽ����ò�����
//	printf("%d\n", a);//��ʱa����20
//	return 0;
//}