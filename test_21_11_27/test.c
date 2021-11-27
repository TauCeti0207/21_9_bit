#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef struct
//{
//	int data;
//	int* next;
//}Lnode;
//
//int* list_insert(Lnode* head, Lnode* p, int e)
//{
//	Lnode* q, * s;
//	s = (Lnode*)malloc(sizeof(Lnode));
//	s->data = e;
//	s->next = 0;
//	if (head == NULL)
//	{
//		head = s;
//		return head;
//	}
//	if (p == head)
//	{
//		s->next = head;
//		head = s;
//	}
//	else
//	{
//		q = head;
//		while (q->next != p)
//		{
//			q = q->next;
//		}
//		q->next = s;
//		s->next = p;
//	}
//	return head;
//}
//
//
//int* list_create(Lnode* head, int* a, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		head = list_insert(head, head, a[n - 1 - i]);
//	}
//	return head;
//}
//
//void list_display(Lnode* head)
//{
//	Lnode* p;
//	p = head;
//	while (p != NULL)
//	{
//		printf("%d\t", p->data);
//		p = p->next;
//	}
//}
//
//int* list_find(Lnode* head, int e)
//{
//	Lnode* p;
//	p = head;
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	while (p)
//	{
//		if (p->data == e)
//			return p;
//		p = p->next;
//	}
//	return NULL;
//}
//
//int main()
//{
//	int n = 10, e;
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	Lnode* first = 0, * p = 0;
//	first = list_create(first, a, n);
//	list_display(first);
//	int i;
//	printf("\nPlease input the position you want to insert\n");
//	scanf("%d", &i);
//	i--;
//	p = list_find(first, a[i]);
//	printf("\nPlease input datas you want to insert\n");
//	scanf("%d", &e);
//	first = list_insert(first, p, e);
//	list_display(first);
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
//		printf("����ռ�ʧ��\n");
//		exit(0);
//	}
//	t.length = 0;
//	t.size = MAX_SIZE;
//	printf("������Ԫ��>:\n");
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
//	//���˳���
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
//	//������λ���Ƿ���ȷ
//	if (position > t.length || position < 1)
//	{
//		printf("����λ������\n");
//		return t;
//	}
//
//	//���˳���Ƿ��п���,��û�����·���
//	if (t.length == t.size)
//	{
//		t.head = (int*)realloc(t.head, (t.size + 1) * sizeof(int));
//		if (!t.head)
//		{
//			printf("����ʧ��\n");
//			return t;
//		}
//		t.size += 1;
//	}
//
//	//������λ�ÿ�ʼ�ĺ���Ԫ�غ���
//	for (i = t.length - 1; i >= position - 1; i--)
//	{
//		t.head[i + 1] = t.head[i];
//	}
//
//	//����Ԫ��
//	t.head[position - 1] = elem;
//	t.length++;
//	//���˳���
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
//	//�ж�ɾ��λ���Ƿ���ȷ
//	if (position > t.length || position < 1)
//	{
//		printf("ɾ��λ�ô���\n");
//		exit(0);
//	}
//
//	//ɾ��
//	for (i = position; i < t.length; i++)
//	{
//		t.head[i - 1] = t.head[i];
//	}
//	t.length--;
//
//	//���˳���
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
//	printf("����������Ԫ�غ�λ��>:\n");
//	//���������
//	getchar();
//	getchar();
//	getchar();
//	scanf("%d %d", &elem, &position);
//	t = insert_table(t, elem, position);
//
//	printf("������Ҫɾ����Ԫ�ص�λ��>:\n");
//	scanf("%d", &dele_position);
//	t = delet_table(t, dele_position);
//	return 0;
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
	while (temp->next)
	{
		temp = temp->next;
		printf("%d ", temp->elem);
	}
	printf("\n");
}

LinkList* init_LinkList()
{
	LinkList* head_node = (LinkList*)malloc(sizeof(LinkList));//ͷ���
	LinkList* temp = head_node;
	for (int i = 1; i <= 5; i++)
	{
		LinkList* a = (LinkList*)malloc(sizeof(LinkList));
		a->elem = i;
		a->next = NULL;
		temp->next = a;
		temp = temp->next;
	}
	printf("�Ѵ�������:\n");
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
			printf("����λ������\n");
			return head_node;
		}
		temp = temp->next;
	}

	//����������
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
		printf("������Ҫ�����Ԫ�غ�λ��\n");
		scanf("%d %d", &elem, &position);
		insert_list(head_node, elem, position);
	}

}