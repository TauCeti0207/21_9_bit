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
#include<stdio.h>
#include<ctype.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* src, size_t num)
{
    void* ret = dest;
    assert(dest && src);
    while (num--)
    {
        *(char*)dest = *(char*)src;//ǿ������ת��ֻ����ʱ�ģ������ı�dest������
        dest = (char*)dest + 1;;//void*����ֱ��++
        src = (char*)src + 1;
    }
    return ret;
}

#include<stdio.h>
#include<memory.h>
#include<string.h>
#include<assert.h>


void* my_memmove(void* dest, const void* src, size_t num)
{
    void* ret = dest;
    assert(dest && src);

    //��ǰ��󿽱�
    if (dest < src)
    {
        while (num--)
        {
            *(char*)dest = *(char*)src;
            dest = (char*)dest + 1;
            src = (char*)src + 1;
        }
    }

    //�Ӻ���ǰ����
    else
    {
        while (num--)//20�ͱ��19
        {
            *((char*)dest + num) = *((char*)src + num);
        }
    }
    return ret;
}
void test1()
{
    //��arr3�е�12345�����ŵ�34567��
    int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr4[5] = { 0 };
    my_memmove(arr3+2, arr3, 5 * sizeof(arr3[0]));
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);//1 2 1 2 3 4 5 8 9 10
    }
}
int main()
{
   
    test1();
    return 0;
}