#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

////1-1/2+1/3-1/4+...
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * flag;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);//0.688172
//	return 0;
//}


////����̨,��ʮ���������ֵ
//#include <stdio.h>
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

////99�˷���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//99�˷���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////��ΰѺ��������2��������ظ���������
////1.�β�������
//#include <stdio.h>
//void test(int arr[]) //���鴫��,�β����������Ҳ�ǶԵ� ��С�׸�������� 
////ֻ����ʵ����ָ�����
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr); //��ʵ����ȥ������Ԫ�ص�ַ
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//��ΰѺ��������2��������ظ���������
//2.�β���2��ָ��
//#include <stdio.h>
//void test(int* px, int* py)
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	test(&x, &y);
//	printf("%d %d\n",x,y);
//	return 0;
//}



////��ΰѺ��������2��������ظ���������
////3.ʹ��ȫ�ֱ���
//#include <stdio.h>
//int a = 0;
//int b = 0;
//void test()
//{
//	int x = 10;
//	int y = 20;
//	a = x;
//	b = y;
//}
//int main()
//{
//	test();
//	printf("%d %d\n", a, b);
//	return 0;
//}
#include<stdio.h>
int main()
{

	return 0;
}