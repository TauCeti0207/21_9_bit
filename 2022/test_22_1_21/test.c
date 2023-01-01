#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	const char* p = "@.";//这个无需顺序区分
//	char arr[] = "yzq2076188013@qq.com";
//	char buff[50] = { 0 };
//	strcpy(buff, arr);
//	char* str = strtok(buff, p);//yzq2076188013
//	printf("%s\n", str);
//	str = strtok(NULL, p);//qq
//	printf("%s\n", str);
//	str = strtok(NULL, p);// com
//	printf("%s\n", str);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//以只读方式打开test.txt文件(实际不存在)
//	if (NULL == pf)
//	{
//		//出错的原因是什么
//		printf("%s\n", strerror(errno));//No such file or directory
//		return 0;
//	}
//	//读文件
//	//...
//	// 
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch = 'w';
	if (isspace(ch))
	{
		//空白字符
		printf("%d\n", isspace(ch));
	}
	else
	{
		printf("%d\n", isspace(ch));//0
		//非空白字符返回0
	}
	return 0;
}