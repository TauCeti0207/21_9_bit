#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    int i = 0;
//    int* p = arr;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", *(p+i));
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[10000] = { 0 };
//    scanf("%s", arr);
//    int len = strlen(arr);
//    char* left = arr;
//    char* right = arr + len - 1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        left++;
//        right--;
//    }
//    printf("%s\n", arr);
//    return 0;
//}



//#include<stdio.h>
//#include<stdlib.h> 
//#define MAX 5
//
//typedef struct
//{
//	int data[MAX];
//	int length;
//	int* head;
//}list;
//
//void list_create(list* lp)
//{
//	int i, elem;
//	lp->length = 0;
//	printf("\nplease input datas of the list\n");
//	for (i = 0; i < MAX; i++)
//	{
//		scanf(" %d", &elem);
//		if (elem == -1) break;
//		lp->data[i] = elem;
//		lp->length++;
//	}
//}
//
//void showlist(list* lp)
//{
//	int i;
//	printf("\nThese %d records are:\n", lp->length);
//	if (lp->length <= 0)
//	{
//		printf("No data!\n");
//		return;
//	}
//	for (i = 0; i < lp->length; i++)
//		printf(" %d ", lp->data[i]);
//	printf("\nlength of the list is:%d", lp->length);
//}
//main()
//{
//	list lp;
//	list_create(&lp);
//	showlist(&lp);
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20
#define INIT_SIZE 5

typedef struct Table
{
	int* head;
	int length;
	int size;
}table;

table init_table()
{
	int elem = 0;
	table t;
	t.head = (int*)malloc(INIT_SIZE * sizeof(int));
	if (!t.head)
	{
		printf("����ռ�ʧ��\n");
		exit(0);
	}
	t.length = 0;
	t.size = INIT_SIZE;
	printf("������Ԫ��>:\n");
	for (int i = 0; i < INIT_SIZE; i++)
	{
		scanf("%d", &elem);
		if (t.head[i] == -1)
		{
			break;
		}
		t.head[i] = elem;
		t.length++;
	}
	return t;
}

void display_table(table t)
{
	for (int i = 0; i < t.length; i++)
	{
		printf("%d ", t.head[i]);
	}
	printf("\n");
}

table insert_table(table t, int elem, int position)
{
	int i = 0;
	//������λ���Ƿ���ȷ
	if (position > t.length || position < 1)
	{
		printf("����λ������\n");
		return t;
	}

	//���˳���Ƿ��п���,��û�����·���
	if (t.length == t.size)
	{
		t.head = (int*)realloc(t.head, (t.size + 1) * sizeof(int));
		if (!t.head)
		{
			printf("����ʧ��\n");
			return t;
		}
		t.size += 1;
	}

	//������λ�ÿ�ʼ�ĺ���Ԫ�غ���
	for (i = t.length - 1; i >= position - 1; i--)
	{
		t.head[i + 1] = t.head[i];
	}

	//����Ԫ��
	t.head[position - 1] = elem;
	t.length++;
	return t;
}

table delet_table(table t, int position)
{
	int i = 0;
	//�ж�ɾ��λ���Ƿ���ȷ
	if (position > t.length || position < 1)
	{
		printf("ɾ��λ�ô���\n");
		exit(0);
	}

	//ɾ��
	for (i = position; i < t.length; i++)
	{
		t.head[i - 1] = t.head[i];
	}
	t.length--;
	return t;
}
int main()
{
	table t = init_table();
	display_table(t);
	t = insert_table(t, 9, 3);
	display_table(t);
	t = delet_table(t, 3);
	display_table(t);
	return 0;
}