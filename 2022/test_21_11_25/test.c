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
//int main()
//{
//	list lp;
//	list_create(&lp);
//	showlist(&lp);
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 5
//
//typedef struct Table
//{
//	int* head;
//	int length;
//	int size;
//}table;
//
//table init_table()
//{
//	int elem = 0;
//	table t;
//	t.head = (int*)malloc(MAX_SIZE * sizeof(int));
//	if (!t.head)
//	{
//		printf("分配空间失败\n");
//		exit(0);
//	}
//	t.length = 0;
//	t.size = MAX_SIZE;
//	printf("请输入元素>:\n");
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		scanf("%d", &elem);
//		if (elem == -1)
//		{
//			break;
//		}
//		t.head[i] = elem;
//		t.length++;
//	}
//
//	//输出顺序表
//	for (int i = 0; i < t.length; i++)
//	{
//		printf("%d ", t.head[i]);
//	}
//	printf("\n");
//	return t;
//}
//
////void display_table(table t)
////{
////	for (int i = 0; i < t.length; i++)
////	{
////		printf("%d ", t.head[i]);
////	}
////	printf("\n");
////}
//
//table insert_table(table t, int elem, int position)
//{
//	int i = 0;
//	//检查插入位置是否正确
//	if (position > t.length || position < 1)
//	{
//		printf("插入位置有误\n");
//		return t;
//	}
//
//	//检查顺序是否有空余,若没有重新分配
//	if (t.length == t.size)
//	{
//		t.head = (int*)realloc(t.head, (t.size + 1) * sizeof(int));
//		if (!t.head)
//		{
//			printf("分配失败\n");
//			return t;
//		}
//		t.size += 1;
//	}
//
//	//将插入位置开始的后续元素后移
//	for (i = t.length - 1; i >= position - 1; i--)
//	{
//		t.head[i + 1] = t.head[i];
//	}
//
//	//插入元素
//	t.head[position - 1] = elem;
//	t.length++;
//	//输出顺序表
//	for (int i = 0; i < t.length; i++)
//	{
//		printf("%d ", t.head[i]);
//	}
//	printf("\n");
//
//	return t;
//}
//
//table delet_table(table t, int position)
//{
//	int i = 0;
//	//判断删除位置是否正确
//	if (position > t.length || position < 1)
//	{
//		printf("删除位置错误\n");
//		exit(0);
//	}
//
//	//删除
//	for (i = position; i < t.length; i++)
//	{
//		t.head[i - 1] = t.head[i];
//	}
//	t.length--;
//
//	//输出顺序表
//	for (int i = 0; i < t.length; i++)
//	{
//		printf("%d ", t.head[i]);
//	}
//	printf("\n");
//
//	return t;
//}
//int main()
//{
//	int elem = 0;
//	int position = 0;
//	int dele_position = 0;
//	table t = init_table();
//
//	printf("请输入插入的元素和位置>:\n");
//	//清除缓冲区
//	getchar();
//	getchar();
//	getchar();
//	scanf("%d %d", &elem, &position);
//	t = insert_table(t, elem, position);
//
//	printf("请输入要删除的元素的位置>:\n");
//	scanf("%d", &dele_position);
//	t = delet_table(t, dele_position);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//typedef struct LinkList
//{
//	int elem;
//	struct LinkList* next;
//}LinkList;
//
//void display_list(LinkList* head_node)
//{
//	LinkList* temp = head_node;
//	while (temp->next)
//	{
//		temp = temp->next;
//		printf("%d ", temp->elem);
//	}
//	printf("\n");
//}
//
//LinkList* init_LinkList()
//{
//	LinkList* head_node = (LinkList*)malloc(sizeof(LinkList));//头结点
//	LinkList* temp = head_node;
//	for (int i = 1; i <= 5; i++)
//	{
//		LinkList* a = (LinkList*)malloc(sizeof(LinkList));
//		a->elem = i;
//		a->next = NULL;
//		temp->next = a;
//		temp = temp->next;
//	}
//	printf("已创建链表:\n");
//	display_list(head_node);
//	return head_node;
//}
//
//
//
//LinkList* insert_list(LinkList* head_node, int elem, int position)
//{
//	LinkList* temp = head_node;
//	LinkList* node = NULL;
//	int i = 0;
//	for (i = 1; i < position; i++)
//	{
//		if (temp == NULL)
//		{
//			printf("插入位置有误\n");
//			return head_node;
//		}
//		temp = temp->next;
//	}
//
//	//创建插入结点
//	node = (LinkList*)malloc(sizeof(LinkList));
//	node->elem = elem;
//	node->next = temp->next;
//	temp->next = node;
//	display_list(head_node);
//	return head_node;
//}
//
//
//int main()
//{
//	LinkList* head_node = NULL;
//	head_node = init_LinkList();
//	for (int i = 0; i < 5; i++)
//	{
//		int elem = 0;
//		int position = 0;
//		printf("请输入要插入的元素和位置\n");
//		scanf("%d %d", &elem, &position);
//		insert_list(head_node, elem, position);
//	}
//	
//}






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

//
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


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		num = a + num * 10;
//		sum = sum + num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10000; i++)
//	{
//		int temp = i;
//		int count = 0;
//		int sum = 0;
//
//		while (temp)
//		{
//			temp /= 10;
//			count++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += pow((temp % 10), count);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	printf("      *\n");
//	printf("     ***\n");
//	printf("    *****\n");
//	printf("   *******\n");
//	printf("  *********\n");
//	printf(" ***********\n");
//	printf("*************\n");
//	printf(" ***********\n");
//	printf("  *********\n");
//	printf("   *******\n");
//	printf("    *****\n");
//	printf("     ***\n");
//	printf("      *\n");
//	return 0;
//}

////输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}


//#include <stdio.h>
//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--) 
//	{
//		printf("%u\n", i);
//		Sleep(1000);//为了看得更清楚
//	}
//	return 0;
//}

//#include <stdio.h>
//#include<Windows.h>
//#include<limits.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//
//#include<float.h>

//#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}