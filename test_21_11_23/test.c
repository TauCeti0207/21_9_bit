#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	//1~10
//	int arr[10] = { 0 };
//	int i = 0;
//	test();
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	arr[i] = 0;
//	//}
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//const���ζ���ָ��
//	const int* const * const ppa = &pa;
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)//��ϣ��arr���ݱ��޸�
//{
//	assert(str != NULL);//����
//	//char* end = str;//�Ѱ�ȫ��str�����˰�ȫ��end,endҲҪ��const
//	const char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - str;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	return 0;
//}


//void test2()
//{
//	printf("test2\n");
//}
//void test1()
//{
//	printf("test1\n");
//	test2();
//}
//void test()
//{
//	printf("test\n");
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;	//���ret���б�Ҫ
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//Ԫ��elem��ջ
//int push(int* a, int top, int elem) {
//    a[++top] = elem;
//    return top;
//}
//����Ԫ�س�ջ
//int pop(int* a, int top) {
//    if (top == -1) {
//        printf("��ջ");
//        return -1;
//    }
//    printf("��ջ��%d\n", a[top]);
//    top--;
//    return top;
//}
//int main() {
//    int a[100];
//    int top = -1;
//    top = push(a, top, 1);
//    top = push(a, top, 2);
//    top = push(a, top, 3);
//    top = push(a, top, 4);
//    top = pop(a, top);
//    top = pop(a, top);
//    top = pop(a, top);
//    top = pop(a, top);
//    top = pop(a, top);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>  //malloc()��exit()
//#define Size 5
//typedef struct Table {
//    int* head;
//    int length;
//    int size;
//}table;
//table initTable() {
//    table t;
//    t.head = (int*)malloc(Size * sizeof(int));
//    if (!t.head)
//    {
//        printf("��ʼ��ʧ��");
//        exit(0);
//    }
//    t.length = 0;
//    t.size = Size;
//    return t;
//}
////���˳�����Ԫ�صĺ���
//void displayTable(table t) {
//    int i;
//    for (i = 0; i < t.length; i++) {
//        printf("%d ", t.head[i]);
//    }
//    printf("\n");
//}
//int main() {
//    int i;
//    table t = initTable();
//    //��˳��������Ԫ��
//    for (i = 1; i <= Size; i++) {
//        t.head[i - 1] = i;
//        t.length++;
//    }
//    printf("˳����д洢��Ԫ�طֱ��ǣ�\n");
//    displayTable(t);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////�����нڵ�Ľṹ
//typedef struct Link {
//    int  elem;
//    struct Link* next;
//}link;
////��ʼ������ĺ���
//link* initLink();
////�����������ĺ���
//void display(link* p);
//int main() {
//    link* p = NULL;
//    //��ʼ������1��2��3��4��
//    printf("��ʼ������Ϊ��\n");
//    p = initLink();
//    display(p);
//    return 0;
//}
//link* initLink() {
//    int i;
//    link* p = NULL;//����ͷָ��
//    link* temp = (link*)malloc(sizeof(link));//������Ԫ�ڵ�
//    //��Ԫ�ڵ��ȳ�ʼ��
//    temp->elem = 1;
//    temp->next = NULL;
//    p = temp;//ͷָ��ָ����Ԫ�ڵ�
//    for (i = 2; i < 5; i++) {
//        link* a = (link*)malloc(sizeof(link));
//        a->elem = i;
//        a->next = NULL;
//        temp->next = a;
//        temp = temp->next;
//    }
//    return p;
//}
//void display(link* p) {
//    link* temp = p;//��tempָ������ָ��ͷ���
//    //ֻҪtempָ��ָ��Ľ���next����Null����ִ�������䡣
//    while (temp) {
//        printf("%d ", temp->elem);
//        temp = temp->next;
//    }
//    printf("\n");
//}


//#include <stdio.h>
//#define max 5//��ʾ˳�������Ŀռ��С
//int enQueue(int* a, int front, int rear, int data) {
//    if ((rear + 1) % max == front) {
//        printf("�ռ�����");
//        return rear;
//    }
//    a[rear % max] = data;
//    rear++;
//    return rear;
//}
//int  deQueue(int* a, int front, int rear) {
//    //���front==rear����ʾ����Ϊ��
//    if (front == rear % max) {
//        printf("����Ϊ��");
//        return front;
//    }
//    printf("%d ", a[front]);
//    front = (front + 1) % max;
//    return front;
//}
//int main() {
//    int a[max];
//    int front, rear;
//    front = rear = 0;
//    //���
//    rear = enQueue(a, front, rear, 1);
//    rear = enQueue(a, front, rear, 2);
//    rear = enQueue(a, front, rear, 3);
//    rear = enQueue(a, front, rear, 4);
//    //����
//    front = deQueue(a, front, rear);
//    //�����
//    rear = enQueue(a, front, rear, 5);
//    //�ٳ���
//    front = deQueue(a, front, rear);
//    //�����
//    rear = enQueue(a, front, rear, 6);
//    //�ٳ���
//    front = deQueue(a, front, rear);
//    front = deQueue(a, front, rear);
//    front = deQueue(a, front, rear);
//    front = deQueue(a, front, rear);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 11; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; //����б��0 
//}
//int main()
//{
//	char arr1[20] = { "xxxxxxxxxxxxx"};
//	char arr2[] = { "hello" };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//�ȿ�����++
//		//�ȿ�����,����б��0ֹͣ��
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "xxxxxxxxxxxxx" };
//	char arr2[] = { "hello" };
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}