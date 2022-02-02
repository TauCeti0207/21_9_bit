#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void find_two_sig_num(int* arr, int sz, int* pn, int* pm)
//{
//	//先全部异或一起
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];//7^8
//	}
//	//找出ret种单独的2个数字异或起来第几位为1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	//分组,第pos位为1的一组,为0的另一组,这样就把两个单独的数字分到2组了
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pn ^= arr[i];//找到n了
//		}
//	}
//	*pm = ret ^ *pn;
//}
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,4,5,6,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	int m = 0;
//	find_two_sig_num(arr, sz, &n, &m);
//	printf("%d %d\n", n, m);
//	return 0;
//}
#include<assert.h>
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	int i = 0;
//	for ( i = 0; src[i] && (i < count); i++)
//	{
//		dest[i] = src[i];
//	}
//	//如果src的数据个数小于count
//	if (i < count)
//	{
//		dest[i] = 0;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxxx";
//	char arr2[] = "hel";
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);//he
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//先找到目标空间\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//追加内容
//	int i = 0;
//	for (i = 0; src[i] && (i < count); i++)
//	{
//		dest[i] = src[i];
//	}
//	dest[i] = 0;
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "helloxxxxxxx";
//	char arr2[] = "hello";
//	my_strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);//helloxxxxxxxhello
//	return 0;
//}
int my_atoi(const char* str)
{
    char flag = '+';
    int res = 0;
    if (*str == '-')
    {
        ++str;
        flag = '-';
    }
    //逐个字符转换，并累加到结果res 
    //如果是数字才进行转换，数字0~9的ASCII码：48~57 
    while (*str>=48 && *str<57)
    {
        res = 10 * res + *str++ - 48;//字符'0'的ASCII码为48,48-48=0刚好转化为数字0 
    }

    if (flag == '-')//处理是负数的情况
    {
        res = -res;
    }
    return (int)res;
}
int main()
{
    printf("字符串\"123456\"转换为数字：%d\n", my_atoi("123456"));
    printf("字符串\"-123456\"转换为数字：%d\n", my_atoi("-123456"));
    return 0;
}