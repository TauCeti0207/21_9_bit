#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	//´ÓÇ°Íùºó¿½±´
//	if (dest<src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//void test1()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	my_memmove(arr + 2, arr, 5 * sizeof(arr[0]));
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}


void* my_memcpy(void* dest, const void* src, size_t num)
{
    void* ret = dest;
    assert(dest && src);
    while (num--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }
    return ret;
}

int main()
{
    int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr4[5] = { 0 };
    my_memcpy(arr4, arr3 + 5, 5 * sizeof(arr3[0]));
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr4[i]);//
    }
	return 0;
}