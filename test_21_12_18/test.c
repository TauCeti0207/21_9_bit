#define _CRT_SECURE_NO_WARNINGS 1
#include"student.h"

void menu()
{
	printf("********************************************\n");
	printf("*********   1.��ʾѧ����Ϣ   ***************\n");
	printf("*********   2.����ĳѧ����Ϣ   *************\n");
	printf("*********   3.��ĳѧ���ܳɼ�   *************\n");
	printf("*********   4.��ѧ�Ų���ѧ����Ϣ   *********\n");
	printf("*********   5.��ĳ�ſ�ƽ����   *************\n");
	printf("*********   6.�����ֽܷ�������   ***********\n");
	printf("*********   0.�˳�   ***********************\n");
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
		printf("��ѡ��:>");
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
			printf("������Ҫ���ܳɼ���ѧ��������>:\n");
			scanf("%s", name);
			int num = Student_SearchByName(name);
			float sum = score_sum_student(num);
			printf("��ѧ���ɼ�Ϊ:%d\n", sum);
			break;
		case 4:
			printf("������ѧ����ID>:\n");
			scanf("%s",ID);
			show_student_byID(ID);
			break;
		case 5:
			printf("�ÿγ�ƽ����Ϊ:%d\n", average_score_one_course());
			break;
		case 6:
			//sort_score_all();
			break;
		case 0:
			printf("�˳�ѧ���ɼ�����ϵͳ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}