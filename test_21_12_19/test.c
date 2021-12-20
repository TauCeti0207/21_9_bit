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
	printf("\n������ѧ����ѧ�š�������Ӣ�����ѧ�ɼ���\n");
	for (i = 1; i <= n; i++)
	{
		printf("ѧ��%d��ѧ�ţ�", i);
		scanf("%d", &s[i].num);
		printf("ѧ��%d��������", i);
		scanf("%s", &s[i].name);
		printf("ѧ��%d��Ӣ��ɼ���", i);
		scanf("%d", &s[i].English);
		printf("ѧ��%d����ѧ�ɼ���", i);
		scanf("%d", &s[i].Math);
		s[i].sum = s[i].English + s[i].Math;
	}
}

void show_table(student_table s[], int n)
{
	int i;
	if (n <= 0)
	{
		printf("û�����ϣ�\n");
		return;
	}
	printf("\n������������������������\n");
	printf("ѧ��  ����  Ӣ��ɼ�  ��ѧ�ɼ�\n");
	for (i = 1; i <= n; i++)
	{
		printf("%d  %s  %d  %d\n", s[i].num, s[i].name, s[i].English, s[i].Math);
	}
}

int sum_table(student_table s[], int n)
{
	int i, w, sum;
	printf("��������Ҫ��ɼ��ܺ͵�ѧ��ѧ�ţ�");
	scanf("%d", &w);
	for (i = 1; i <= n; i++)
		if (s[i].num == w)
		{
			return i;
			break;
		}
	sum = s[i].English + s[i].Math;
	printf("��ѧ�����ܳɼ��ǣ�%d", sum);
}

int search_table(student_table s[], int n)
{
	int i, w;
	printf("��������Ҫѧ�Ų���ѧ����Ϣ��");
	scanf("%d", &w);
	for (i = 1; i < n; i++)
		if (s[i].num == w)
		{
			return i;
			break;
		}
	printf("��ѧ��������%s\n", s[i].name);
	printf("��ѧ��Ӣ��ɼ���%d\n", s[i].English);
	printf("��ѧ����ѧ�ɼ���%d\n", s[i].Math);
	printf("������������������������\n");
}

void average_table(student_table s[], int n)
{
	int i, w = 0, ave, sum;
	printf("������������������������\n");
	printf("��ѡ������ƽ���ֵĿ�Ŀ\n");
	printf("��1��Ӣ�� ��2����ѧ\n");
	printf("����ѡ����ţ�");
	scanf("%d", w);
	switch (w)
	{
	case 1:for (i = 1; i <= n; i++)
	{
		sum = 0;
		sum = sum + s[i].English;
	}
		  ave = sum / i;
		  printf("���ƽ����Ϊ��%d", ave);
		  break;
	case 2:for (i = 1; i <= n; i++)
	{
		sum = 0;
		sum = sum + s[i].Math;
	}
		  ave = sum / i;
		  printf("���ƽ����Ϊ��%d", ave);
		  break;
	}
}

void insert_table(student_table s[], int a, int b, char c, int d, int e, int n)
{
	int k, i = 0;
	if ((a < 0) || (a > n))
	{
		printf("���ڲ��뷶Χ��\n");
	}
	if (n > NUM)
	{
		printf("���������\n");
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
	printf("\n������������������������\n");
	printf("\n��1������ѧ����Ϣ��        ��2����ʾѧ����Ϣ�� ��3����ĳѧ���ܳɼ�\n");
	printf("\n��4������ĳѧ������Ϣ      ��5����ĳ�Ƶ�ƽ���� ��6��������ͬѧ����Ϣ\n");
	printf("\n��7����ѧ���ܳɼ���������  ��8���˳�\n");
	printf("������������������������\n");
	printf("��ѡ������Ҫ�Ĳ����Ĵ��ţ�");
	if (scanf("%d", &k) == 0)
	{
		printf("������ѡ��\n");
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
		case 1:printf("��Ҫ¼���ѧ��һ���У�");
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
			printf("��������ͬѧ�����λ�ã�%d\n", &a);
			printf("��������ͬѧ��ѧ�ţ�%d\n", &b);
			printf("��������ͬѧ��������%s\n", &c);
			printf("��������ͬѧ��Ӣ��ɼ���%d\n", &d);
			printf("��������ͬѧ����ѧ�ɼ���%d\n", &e);
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