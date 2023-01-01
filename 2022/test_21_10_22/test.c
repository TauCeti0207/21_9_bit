#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    if (x < 0)
//    {
//        y = 1;
//    }
//    else if (x == 0)
//    {
//        y = 0;
//    }
//    else 
//    {
//        y = -1;
//    }
//    printf("%d\n", y);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//    float ave = (a + b + c + d + e) / 5.0;
//    printf("%.1lf\n", ave);
//    return 0;
//}

//2.反向输出4位数
//~~~
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int b = a / 1000;//1
//    int c = a / 100 % 10;//2
//    int d = a % 100 / 10;//3
//    int e = a % 10;//4
//    printf("%d%d%d%d\n", e, d, c, b);
//    return 0;
//}
//~~~
//我写的, 不太好, 需要思考
//
//别人的 :
//~~~
//#include <stdio.h>
//int main(void)
//{
//    int n;
//    scanf("%d", &n);
//    while (n != 0)
//    {
//        printf("%d", n % 10);
//        n = n / 10;
//    }
//    return 0;
//}
//~~~
//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%#o %#x\n", n, n);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int n = 1234;
//    printf("%#o %#X\n", n, n);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("Hello world!\n");
//    printf("%d\n", printf("Hello world!"));
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//   
//    int a = printf("Hello world!");
//    printf("%d\n", a);
//    return 0;
//}

#include<stdio.h>
int main()
{

    int a = printf("Hello world!");
    printf("\n");
    printf("%d\n", a);
    return 0;
}