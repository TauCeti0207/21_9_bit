#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <malloc.h>
//
//typedef struct Node
//{
//	int date;
//	struct Node* pNext;
//}Lnode, * pLnode;
//
//pLnode creat_list(void);
//void insert_list(pLnode);
//void tranvers_list(pLnode);
//
//int main()
//{
//	int i;
//	pLnode pHead = NULL;
//	pHead = creat_list();
//	for (i = 0; i < 5; i++)
//		insert_list(pHead);
//	tranvers_list(pHead);
//
//	return 0;
//}
//
//pLnode creat_list(void)
//{
//	pLnode pHead = (pLnode)malloc(sizeof(Lnode));
//	pHead->pNext = NULL;
//	return pHead;
//}
//
//void insert_list(pLnode pH)
//{
//	int loc, val, i;
//	pLnode p = pH;
//
//	printf("请输入你要插入的位置：");
//	scanf_s("%d", &loc);
//	printf("请输入你要插入的值：  ");
//	scanf_s("%d", &val);
//	printf("\n");
//
//	for (i = 1; i < loc; i++)
//	{
//		if (p->pNext == NULL && i == 1)
//		{
//			printf("链表为空，只能在尾部添加节点\n");
//			break;
//		}
//		else
//		{
//			if (loc != i + 1)
//				if (p->pNext == NULL)
//				{
//					printf("插入位置超出链表长度，只能在尾部插入\n");
//					break;
//				}
//			p = p->pNext;
//		}
//	}
//	pLnode pNew = (pLnode)malloc(sizeof(Lnode));
//	pNew->date = val;
//	pNew->pNext = p->pNext;
//	p->pNext = pNew;
//
//	tranvers_list(pH);
//}
//
//void tranvers_list(pLnode pH)
//{
//	pLnode p = pH->pNext;
//	while (p != NULL)
//	{
//		printf("%d  ", p->date);
//		p = p->pNext;
//	}
//	if (p = NULL)
//		printf("\n链表为空！\n");
//	printf("\n\n");
//}




#include<stdio.h>
#include<stdlib.h>
typedef struct LinkList
{
	int elem;
	struct LinkList* next;
}LinkList;

void display_list(LinkList* head_node)
{
	LinkList* temp = head_node;
	printf("链表:\n");
	while (temp->next)
	{
		temp = temp->next;
		printf("%d ", temp->elem);
	}
	printf("\n");
}

LinkList* init_LinkList()
{
	LinkList* head_node = (LinkList*)malloc(sizeof(LinkList));//头结点
	head_node->next = NULL;
	/*LinkList* temp = head_node;
	for (int i = 1; i <= 1; i++)
	{
		LinkList* a = (LinkList*)malloc(sizeof(LinkList));
		a->elem = 0;
		a->next = NULL;
		temp->next = a;
		temp = temp->next;
	}*/
	printf("已创建链表:\n");
	display_list(head_node);
	return head_node;
}



LinkList* insert_list(LinkList* head_node, int elem, int position)
{
	LinkList* temp = head_node;
	LinkList* node = NULL;
	int i = 0;
	for (i = 1; i < position; i++)
	{
		if (temp == NULL)
		{
			printf("插入位置有误\n");
			return head_node;
		}
		temp = temp->next;
	}

	//创建插入结点
	node = (LinkList*)malloc(sizeof(LinkList));
	node->elem = elem;
	node->next = temp->next;
	temp->next = node;
	display_list(head_node);
	return head_node;
}


int main()
{
	LinkList* head_node = NULL;
	head_node = init_LinkList();
	for (int i = 0; i < 5; i++)
	{
		int elem = 0;
		int position = 0;
		printf("请输入要插入的元素和位置\n");
		scanf("%d %d", &elem, &position);
		insert_list(head_node, elem, position);
	}

}



#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5

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
	t.head = (int*)malloc(MAX_SIZE * sizeof(int));
	if (!t.head)
	{
		printf("分配空间失败\n");
		exit(0);
	}
	t.length = 0;
	t.size = MAX_SIZE;
	printf("请输入元素>:\n");
	for (int i = 0; i < MAX_SIZE; i++)
	{
		scanf("%d", &elem);
		if (elem == -1)
		{
			break;
		}
		t.head[i] = elem;
		t.length++;
	}

	//输出顺序表
	for (int i = 0; i < t.length; i++)
	{
		printf("%d ", t.head[i]);
	}
	printf("\n");
	return t;
}

//void display_table(table t)
//{
//	for (int i = 0; i < t.length; i++)
//	{
//		printf("%d ", t.head[i]);
//	}
//	printf("\n");
//}

table insert_table(table t, int elem, int position)
{
	int i = 0;
	//检查插入位置是否正确
	if (position > t.length || position < 1)
	{
		printf("插入位置有误\n");
		return t;
	}

	//检查顺序是否有空余,若没有重新分配
	if (t.length == t.size)
	{
		t.head = (int*)realloc(t.head, (t.size + 1) * sizeof(int));
		if (!t.head)
		{
			printf("分配失败\n");
			return t;
		}
		t.size += 1;
	}

	//将插入位置开始的后续元素后移
	for (i = t.length - 1; i >= position - 1; i--)
	{
		t.head[i + 1] = t.head[i];
	}

	//插入元素
	t.head[position - 1] = elem;
	t.length++;
	//输出顺序表
	for (int i = 0; i < t.length; i++)
	{
		printf("%d ", t.head[i]);
	}
	printf("\n");

	return t;
}

table delet_table(table t, int position)
{
	int i = 0;
	//判断删除位置是否正确
	if (position > t.length || position < 1)
	{
		printf("删除位置错误\n");
		exit(0);
	}

	//删除
	for (i = position; i < t.length; i++)
	{
		t.head[i - 1] = t.head[i];
	}
	t.length--;

	//输出顺序表
	for (int i = 0; i < t.length; i++)
	{
		printf("%d ", t.head[i]);
	}
	printf("\n");

	return t;
}
int main()
{
	int elem = 0;
	int position = 0;
	int dele_position = 0;
	table t = init_table();

	printf("请输入插入的元素和位置>:\n");
	//清除缓冲区
	getchar();
	getchar();
	getchar();
	scanf("%d %d", &elem, &position);
	t = insert_table(t, elem, position);

	printf("请输入要删除的元素的位置>:\n");
	scanf("%d", &dele_position);
	t = delet_table(t, dele_position);
	return 0;
}
