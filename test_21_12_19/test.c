#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define NUM 100
#define true 1
#define false 0
typedef struct student
{
	int num;
	char name;
	int English;
	int Math;
	int sum;
	int length;
}student_table;
student_table s[NUM], temp[NUM];

void create_table(student_table s[], int n)
{
	int i, a, c, d;
	char b;
	printf("\n请输入学生的学号、姓名、英语和数学成绩：\n");
	for (i = 1; i <= n; i++)
	{
		printf("学生%d的学号：", i);
		scanf("%d", &s[i].num);
		printf("学生%d的姓名：", i);
		scanf("%s", &s[i].name);
		printf("学生%d的英语成绩：", i);
		scanf("%d", &s[i].English);
		printf("学生%d的数学成绩：", i);
		scanf("%d", &s[i].Math);
		s[i].sum = s[i].English + s[i].Math;
	}
}

void show_table(student_table s[], int n)
{
	int i;
	if (n <= 0)
	{
		printf("没有资料！\n");
		return;
	}
	printf("\n————————————\n");
	printf("学号  姓名  英语成绩  数学成绩\n");
	for (i = 1; i <= n; i++)
	{
		printf("%d  %s  %d  %d\n", s[i].num, s[i].name, s[i].English, s[i].Math);
	}
}

int sum_table(student_table s[], int n)
{
	int i, w, sum;
	printf("请输入需要求成绩总和的学生学号：");
	scanf("%d", &w);
	for (i = 1; i <= n; i++)
		if (s[i].num == w)
		{
			return i;
			break;
		}
	sum = s[i].English + s[i].Math;
	printf("该学生的总成绩是：%d", sum);
}

int search_table(student_table s[], int n)
{
	int i, w;
	printf("请输入需要学号查找学生信息：");
	scanf("%d", &w);
	for (i = 1; i < n; i++)
		if (s[i].num == w)
		{
			return i;
			break;
		}
	printf("该学生姓名：%s\n", s[i].name);
	printf("该学生英语成绩：%d\n", s[i].English);
	printf("该学生数学成绩：%d\n", s[i].Math);
	printf("————————————\n");
}

void average_table(student_table s[], int n)
{
	int i, w = 0, ave, sum;
	printf("————————————\n");
	printf("请选择所求平均分的科目\n");
	printf("【1】英语 【2】数学\n");
	printf("输入选择序号：");
	scanf("%d", w);
	switch (w)
	{
	case 1:for (i = 1; i <= n; i++)
	{
		sum = 0;
		sum = sum + s[i].English;
	}
		  ave = sum / i;
		  printf("求得平均分为：%d", ave);
		  break;
	case 2:for (i = 1; i <= n; i++)
	{
		sum = 0;
		sum = sum + s[i].Math;
	}
		  ave = sum / i;
		  printf("求得平均分为：%d", ave);
		  break;
	}
}

void insert_table(student_table s[], int a, int b, char c, int d, int e, int n)
{
	int k, i = 0;
	if ((a < 0) || (a > n))
	{
		printf("不在插入范围！\n");
	}
	if (n > NUM)
	{
		printf("表格已满！\n");
	}
	for (k = n; k >= a; k--)
	{
		s[k + 1].num = s[k].num;
		s[k + 1].name = s[k].name;
		s[k + 1].English = s[k].English;
		s[k + 1].Math = s[k].Math;
	}
	s[a].num = b;
	s[a].name = c;
	s[a].English = d;
	s[a].Math = e;
	s[i].length++;
}

void sort_table(student_table s[], int n)
{
	int i;
	int j, t, a, c, d;
	char b;
	for (i = 1; i >= 1; i++)
	{
		for (j = i + 1; j < n; j++)
			if (s[i].sum < s[j].sum)
			{
				temp[0] = s[i];
				s[i] = s[j];
				s[j] = temp[0];
			}
	}
}

int Menu()
{
	int k;
	printf("\n————————————\n");
	printf("\n【1】创建学生信息表        【2】显示学生信息表 【3】求某学生总成绩\n");
	printf("\n【4】查找某学生的信息      【5】求某科的平均分 【6】插入新同学的信息\n");
	printf("\n【7】按学生总成绩进行排序  【8】退出\n");
	printf("————————————\n");
	printf("请选择你需要的操作的代号：");
	if (scanf("%d", &k) == 0)
	{
		printf("请重新选择！\n");
	}
	return k;
}

int main()
{
	int m = 0, n;
	int a, b, d, e;
	char c;
	while (m != 8)
	{
		m = Menu();
		switch (m)
		{
		case 1:printf("需要录入的学生一共有：");
			scanf("%d", &n);
			create_table(s, n);
			break;
		case 2:show_table(s, n);
			break;
		case 3:sum_table(s, n);
			break;
		case 4:search_table(s, n);
			break;
		case 5:average_table(s, n);
			break;
		case 6:
			printf("请输入新同学插入的位置：%d\n", &a);
			printf("请输入新同学的学号：%d\n", &b);
			printf("请输入新同学的姓名：%s\n", &c);
			printf("请输入新同学的英语成绩：%d\n", &d);
			printf("请输入新同学的数学成绩：%d\n", &e);
			insert_table(s, a, b, c, d, e, n);
			show_table(s, n);
			break;
		case 7:sort_table(s, n);
			show_table(s, n);
			break;
		}
	}
	return 0;
}