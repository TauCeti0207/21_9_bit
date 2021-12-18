#define _CRT_SECURE_NO_WARNINGS 1
#include"student.h"

void menu()
{
	printf("********************************************\n");
	printf("*********   1.显示学生信息   ***************\n");
	printf("*********   2.插入某学生信息   *************\n");
	printf("*********   3.求某学生总成绩   *************\n");
	printf("*********   4.按学号查找学生信息   *********\n");
	printf("*********   5.求某门课平均分   *************\n");
	printf("*********   6.按照总分进行排序   ***********\n");
	printf("*********   0.退出   ***********************\n");
	printf("********************************************\n");
}


char name[20] = { 0 };
char ID[20] = { 0 };
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			show_student_all(3);
			break;
		case 2:
			insert_student();
			break;
		case 3:
			printf("请输入要求总成绩的学生的姓名>:\n");
			scanf("%s", name);
			int num = Student_SearchByName(name);
			float sum = score_sum_student(num);
			printf("该学生成绩为:%d\n", sum);
			break;
		case 4:
			printf("请输入学生的ID>:\n");
			scanf("%s",ID);
			show_student_byID(ID);
			break;
		case 5:
			printf("该课程平均分为:%d\n", average_score_one_course());
			break;
		case 6:
			//sort_score_all();
			break;
		case 0:
			printf("退出学生成绩管理系统\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}