#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("###");
//	return 0;
//}
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("i = %d\n", i);
//		if (1)
//		{
//			int j = 1;
//			printf("before:%d\n", j);
//			j++;
//			printf("after:%d\n", j);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	register int pass = 100;
//	printf("%d", pass);
//	return 0;
//}
//

//extern g_val;
#include "test.h"
int main()
{
	test();
	printf("%d\n", g_val);
	return 0;
}