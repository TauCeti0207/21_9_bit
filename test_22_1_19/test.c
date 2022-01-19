//#define _CRT_SECURE_NO_WARNINGS 1
////////#include<stdio.h>
//////////int main()
//////////{
//////////	////数值一样，类型不同
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
//////////	printf("循环结束\n");
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
//////////*src不能被修改
////////{
////////	assert(dest && src);
////////	char* ret = dest;
////////	while (*dest++ = *src++)
////////	{
////////		;//先拷贝后++
////////		//既拷贝了\0,又让遇到\0时停止了
////////	}
////////	return ret;
////////}
////////int main()
////////{
////////	char arr1[20] = { "xxxxxxxxxxxxx" };
////////	char arr2[] = { "hello" };
////////	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
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
////	assert(dest && src);//判断是否为空指针
////	//1.先找到目标空间的\0
////	while (*dest)
////	{
////		dest++;
////	}
////
////	//2.追加内容到目标空间
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
////	//实际上比较的是ASCII值大小
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
////	//实际上比较的是ASCII值大小
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
//		printf("找不到\n");
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
	if (lenSub == 1)//只有1个元素，next数组只能赋值1个
	{
		return;
	}
	next[1] = 0;
	int i = 2;
	int k = 0;//i前一项的k
	//注意手算next数组与用代码算next数组区别,i还没求，得先求i-1
	//手算：p[i] == p[k] --》next[i+1] = k+1
	//代码算：p[i-1] == p[k] --》next[i] = k+1
	while (i<lenSub)
	{
		if (k == -1 || sub[i-1] == sub[k])
		{
			next[i] = k + 1;
			i++;
			k++;
		}
		else//不相等，k需要往回退到next对应的下标处，再看p[i-1] == p[k]是否成立
			//如果k一直回退，退到-1，此时k越界了，且说明中间是找不到2段相等的子串，即next[i]=0
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

	int* next = (int*)malloc(sizeof(int)*lenSub);//开辟相应大小的next数组
	assert(next != NULL);

	GetNext(substr, next, lenSub);

	int i = pos;//遍历主串
	int j = 0;//遍历子串

	while (i < lenStr && j < lenSub)
	{
		if (j == -1 || str[i] == substr[j])
		{
			i++;
			j++;
		}
		//注意，如果第一个字符就匹配失败，j会回到-1，会产生数组越界
		//此时j恰好需要++回到0，i也应该指向下一个
		else
		{
			j = next[j];//不相等回退到next数组中相应的j下标
		}
	}
	free(next);//next置空
	if (j >= lenSub)
	{
		return i - j;//找到了
	}
	return -1;//遍历完之后都找不到
}


int main()
{
	printf("%d\n", KMP("ababcabcdabcde", "abcd", 0));//5
	printf("%d\n", KMP("ababcabcdabcde", "abcdf", 0));//-1 找不到
	printf("%d\n", KMP("ababcabcdabcde", "ab", 0));//0 一开始就有
	return 0;
}