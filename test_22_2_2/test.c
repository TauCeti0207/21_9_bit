#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void find_two_sig_num(int* arr, int sz, int* pn, int* pm)
//{
//	//��ȫ�����һ��
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];//7^8
//	}
//	//�ҳ�ret�ֵ�����2��������������ڼ�λΪ1
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
//	//����,��posλΪ1��һ��,Ϊ0����һ��,�����Ͱ��������������ֵַ�2����
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pn ^= arr[i];//�ҵ�n��
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
//	//���src�����ݸ���С��count
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
//	//���ҵ�Ŀ��ռ�\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//׷������
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
    //����ַ�ת�������ۼӵ����res 
    //��������ֲŽ���ת��������0~9��ASCII�룺48~57 
    while (*str>=48 && *str<57)
    {
        res = 10 * res + *str++ - 48;//�ַ�'0'��ASCII��Ϊ48,48-48=0�պ�ת��Ϊ����0 
    }

    if (flag == '-')//�����Ǹ��������
    {
        res = -res;
    }
    return (int)res;
}
int main()
{
    printf("�ַ���\"123456\"ת��Ϊ���֣�%d\n", my_atoi("123456"));
    printf("�ַ���\"-123456\"ת��Ϊ���֣�%d\n", my_atoi("-123456"));
    return 0;
}