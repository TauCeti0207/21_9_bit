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
//	//const修饰二级指针
//	const int* const * const ppa = &pa;
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)//不希望arr内容被修改
//{
//	assert(str != NULL);//断言
//	//char* end = str;//把安全的str交给了安全的end,end也要加const
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
//		ret = 1;	//清空ret很有必要
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
//元素elem进栈
//int push(int* a, int top, int elem) {
//    a[++top] = elem;
//    return top;
//}
//数据元素出栈
//int pop(int* a, int top) {
//    if (top == -1) {
//        printf("空栈");
//        return -1;
//    }
//    printf("弹栈：%d\n", a[top]);
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
//#include <stdlib.h>  //malloc()、exit()
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
//        printf("初始化失败");
//        exit(0);
//    }
//    t.length = 0;
//    t.size = Size;
//    return t;
//}
////输出顺序表中元素的函数
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
//    //向顺序表中添加元素
//    for (i = 1; i <= Size; i++) {
//        t.head[i - 1] = i;
//        t.length++;
//    }
//    printf("顺序表中存储的元素分别是：\n");
//    displayTable(t);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////链表中节点的结构
//typedef struct Link {
//    int  elem;
//    struct Link* next;
//}link;
////初始化链表的函数
//link* initLink();
////用于输出链表的函数
//void display(link* p);
//int main() {
//    link* p = NULL;
//    //初始化链表（1，2，3，4）
//    printf("初始化链表为：\n");
//    p = initLink();
//    display(p);
//    return 0;
//}
//link* initLink() {
//    int i;
//    link* p = NULL;//创建头指针
//    link* temp = (link*)malloc(sizeof(link));//创建首元节点
//    //首元节点先初始化
//    temp->elem = 1;
//    temp->next = NULL;
//    p = temp;//头指针指向首元节点
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
//    link* temp = p;//将temp指针重新指向头结点
//    //只要temp指针指向的结点的next不是Null，就执行输出语句。
//    while (temp) {
//        printf("%d ", temp->elem);
//        temp = temp->next;
//    }
//    printf("\n");
//}


//#include <stdio.h>
//#define max 5//表示顺序表申请的空间大小
//int enQueue(int* a, int front, int rear, int data) {
//    if ((rear + 1) % max == front) {
//        printf("空间已满");
//        return rear;
//    }
//    a[rear % max] = data;
//    rear++;
//    return rear;
//}
//int  deQueue(int* a, int front, int rear) {
//    //如果front==rear，表示队列为空
//    if (front == rear % max) {
//        printf("队列为空");
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
//    //入队
//    rear = enQueue(a, front, rear, 1);
//    rear = enQueue(a, front, rear, 2);
//    rear = enQueue(a, front, rear, 3);
//    rear = enQueue(a, front, rear, 4);
//    //出队
//    front = deQueue(a, front, rear);
//    //再入队
//    rear = enQueue(a, front, rear, 5);
//    //再出队
//    front = deQueue(a, front, rear);
//    //再入队
//    rear = enQueue(a, front, rear, 6);
//    //再出队
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
//	*dest = *src; //拷贝斜杠0 
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
//		;//先拷贝后++
//		//既拷贝了,又让斜杠0停止了
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "xxxxxxxxxxxxx" };
//	char arr2[] = { "hello" };
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}