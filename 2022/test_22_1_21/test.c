#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	const char* p = "@.";//�������˳������
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//��ֻ����ʽ��test.txt�ļ�(ʵ�ʲ�����)
//	if (NULL == pf)
//	{
//		//�����ԭ����ʲô
//		printf("%s\n", strerror(errno));//No such file or directory
//		return 0;
//	}
//	//���ļ�
//	//...
//	// 
//	//�ر��ļ�
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
		//�հ��ַ�
		printf("%d\n", isspace(ch));
	}
	else
	{
		printf("%d\n", isspace(ch));//0
		//�ǿհ��ַ�����0
	}
	return 0;
}