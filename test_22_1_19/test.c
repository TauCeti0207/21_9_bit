//#define _CRT_SECURE_NO_WARNINGS 1
////////#include<stdio.h>
//////////int main()
//////////{
//////////	////��ֵһ�������Ͳ�ͬ
//////////	//printf("%d\n", 0);
//////////	//printf("%d\n", '\0');
//////////	//printf("%d\n", NULL);
//////////	return 0;
//////////}
//////////int main()
//////////{
//////////	while (1)
//////////	{
//////////		int c = getchar();
//////////		if (c == '#')
//////////		{
//////////			break;
//////////		}
//////////		printf("%c\n", c);
//////////	}
//////////	printf("ѭ������\n");
//////////	return 0;
//////////}
////////
////////int main()
////////{
////////	char* c[] = { "ENTER","NEW","POINT","FIRST" };
////////	char** cp[] = { c + 3,c + 2,c + 1,c };
////////	char*** cpp = cp;
////////	printf("%s\n", **++cpp);
////////	printf("%s\n", *-- * ++cpp + 3);
////////	printf("%s\n", *cpp[-2] + 3);
////////	printf("%s\n", cpp[-1][-1] + 1);
////////	return 0;
////////}
//////
////////#include<stdio.h>
////////#include<string.h>
////////int main()
////////{
////////	if (strlen("abc") - strlen("abcdef") < 0)
////////	{
////////		printf("1\n");
////////	}
////////	else
////////	{
////////		printf("2\n");
////////	}
////////	return 0;
////////}
//////
//////#include<stdio.h>
////////#include<assert.h>
////////char* my_strcpy(char* dest, const char* src)
//////////*src���ܱ��޸�
////////{
////////	assert(dest && src);
////////	char* ret = dest;
////////	while (*dest++ = *src++)
////////	{
////////		;//�ȿ�����++
////////		//�ȿ�����\0,��������\0ʱֹͣ��
////////	}
////////	return ret;
////////}
////////int main()
////////{
////////	char arr1[20] = { "xxxxxxxxxxxxx" };
////////	char arr2[] = { "hello" };
////////	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
////////	return 0;
////////}
//////
//////int* test()
//////{
//////	int a = 10;
//////	return &a;
//////}
//////int main()
//////{
//////	int* p = test();
//////	return 0;
//////}
////
////#include<stdio.h>
////#include<string.h>
////#include<assert.h>
////char* my_strcat(char* dest, const char* src)
////{
////	char* ret = dest;
////	assert(dest && src);//�ж��Ƿ�Ϊ��ָ��
////	//1.���ҵ�Ŀ��ռ��\0
////	while (*dest)
////	{
////		dest++;
////	}
////
////	//2.׷�����ݵ�Ŀ��ռ�
////	while (*dest++ = *src++)
////	{
////		;
////	}
////	return ret;
////}
////int main()
////{
////	char arr1[30] = "hello";
////	char arr2[] = " world";
////	printf("%s\n", my_strcat(arr1, arr2));
////	return 0;
////}
//
////#include<stdio.h>
////#include<string.h>
////#include<assert.h>
////int my_strcmp(const char* str1, const char* str2)
////{
////	assert(str1 && str2);
////	while (*str1 == *str2)
////	{
////		if (*str1 == '\0')
////		{
////			return 0;
////		}
////		str1++;
////		str2++;
////	}
////	//ʵ���ϱȽϵ���ASCIIֵ��С
////	return *str1 - *str2;
////}
////int main()
////{
////	char arr1[] = "abc";
////	char arr2[] = "abd";
////	int ret1 = strcmp(arr1, arr2);
////	int ret2 = my_strcmp(arr1, arr2);
////	printf("%d\n", ret1);//
////	printf("%d\n", ret2);//
////	return 0;
////}
//
//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////int my_strcmp(const char* str1, const char* str2)
////{
////	assert(str1 && str2);
////	while (*str1 == *str2)
////	{
////		if (*str1 == '\0')
////		{
////			return 0;
////		}
////		str1++;
////		str2++;
////	}
////	//ʵ���ϱȽϵ���ASCIIֵ��С
////	return *str1 - *str2;
////}
//char* my_strstr(const char* str, const char* substr)
//{
//	const char* s1 = str;
//	const char* s2 = substr;
//	const char* cur = str;
//	assert(str && substr);
//	if (*substr == '\0')
//	{
//		return (char*)str;
//	}
//	while (*cur != '\0')
//	{
//		s1 = cur;
//		s2 = substr;
//		while (*s1 && *s2 && *s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//
//}
//int main()
//{
//	char arr1[] = "abbbcdefbbcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (NULL == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//bbcdefbbcdef
//	}
//	return 0;
//}

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

void GetNext(const char* sub, int* next, int lenSub)
{
	next[0] = -1;
	if (lenSub == 1)//ֻ��1��Ԫ�أ�next����ֻ�ܸ�ֵ1��
	{
		return;
	}
	next[1] = 0;
	int i = 2;
	int k = 0;//iǰһ���k
	//ע������next�������ô�����next��������,i��û�󣬵�����i-1
	//���㣺p[i] == p[k] --��next[i+1] = k+1
	//�����㣺p[i-1] == p[k] --��next[i] = k+1
	while (i<lenSub)
	{
		if (k == -1 || sub[i-1] == sub[k])
		{
			next[i] = k + 1;
			i++;
			k++;
		}
		else//����ȣ�k��Ҫ�����˵�next��Ӧ���±괦���ٿ�p[i-1] == p[k]�Ƿ����
			//���kһֱ���ˣ��˵�-1����ʱkԽ���ˣ���˵���м����Ҳ���2����ȵ��Ӵ�����next[i]=0
		{
			k = next[k];
		}
	}
}


int KMP(const char* str, const char* substr, int pos)
{
	assert(str && substr);
	int lenStr = strlen(str);
	int lenSub = strlen(substr);
	if (lenStr == 0 || lenSub == 0)
	{
		return -1;
	}
	if (pos < 0 || pos >= lenStr)
	{
		return -1;
	}

	int* next = (int*)malloc(sizeof(int)*lenSub);//������Ӧ��С��next����
	assert(next != NULL);

	GetNext(substr, next, lenSub);

	int i = pos;//��������
	int j = 0;//�����Ӵ�

	while (i < lenStr && j < lenSub)
	{
		if (j == -1 || str[i] == substr[j])
		{
			i++;
			j++;
		}
		//ע�⣬�����һ���ַ���ƥ��ʧ�ܣ�j��ص�-1�����������Խ��
		//��ʱjǡ����Ҫ++�ص�0��iҲӦ��ָ����һ��
		else
		{
			j = next[j];//����Ȼ��˵�next��������Ӧ��j�±�
		}
	}
	free(next);//next�ÿ�
	if (j >= lenSub)
	{
		return i - j;//�ҵ���
	}
	return -1;//������֮���Ҳ���
}


int main()
{
	printf("%d\n", KMP("ababcabcdabcde", "abcd", 0));//5
	printf("%d\n", KMP("ababcabcdabcde", "abcdf", 0));//-1 �Ҳ���
	printf("%d\n", KMP("ababcabcdabcde", "ab", 0));//0 һ��ʼ����
	return 0;
}