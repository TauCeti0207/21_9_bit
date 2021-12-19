#define _CRT_SECURE_NO_WARNINGS 
#include"student.h"
struct Student
{
    char ID[20];    //ѧ��
    char Name[20];  //����
    float Math_Score;
    float English_Score;
    float Score;
};

//����ѧ������
struct  Student students[1000];
int num = 0;
void show_student_all(int num)
{
    int i = 0;
    // 1����ӡ����
    printf("+----------+--------+--------+--------+--------+\n");
    printf("|   ����   |  ѧ��  |  Ӣ��  |  ��ѧ  | �ܳɼ� |\n");
    printf("+----------+--------+--------+--------+--------+\n");
    // 2��ʹ��forѭ����ӡÿ��ѧ���������ͳɼ�
    for (i = 0; i < num; i++)
    {
        printf("%8s%10s%10.2f%8.2f%8.2f\n",
            students[i].Name,
            students[i].ID,
            students[i].Math_Score,
            students[i].English_Score,
            students[i].Score);
        printf("\n");
        printf("+----------+--------+--------+--------+--------+\n");
    }
}


void insert_student()
{

    while (1)
    {
        printf("����������:");
        scanf("%s", &students[num].Name);
        getchar();

        printf("������ѧ��:");
        scanf("%s", &students[num].ID);
        getchar();

        printf("��������ѧ�ɼ�:");
        scanf("%f", &students[num].Math_Score);
        getchar();

        printf("������Ӣ��ɼ�:");
        scanf("%f", &students[num].English_Score);
        getchar();

        students[num].Score = students[num].Math_Score 
            + students[num].English_Score;
        num++;
        printf("�Ƿ����?(y/n)");
        if (getchar() == 'n')
        {
            break;
        }
    }
}

/*ͨ���������������±�*/
int Student_SearchByName(char name[])
{
    
    int i;
    for (i = 0; i < num; i++)
    {
        if (strcmp(students[i].Name, name) == 0)
        {
            return i;
        }
    }
    return -1;
}


float score_sum_student(int num)
{
    return students[num].Math_Score
        + students[num].English_Score;
}

/*ͨ��ѧ�ŷ��������±�*/
int Student_SearchByIndex(char id[])
{
    int i;
    for (i = 0; i < num; i++)
    {
        if (strcmp(students[i].ID, id) == 0)
        {
            return i;
        }
    }
    printf("����ʧ��,����������ID\n");
}

/*��ʾ����ѧ����¼*/
void Student_DisplaySingle(int i)
{
    printf("+----------+--------+--------+--------+--------+\n");
    printf("|   ����   |  ѧ��  |  Ӣ��  |  ��ѧ  | �ܳɼ� |\n");
    printf("+----------+--------+--------+--------+--------+\n");
    printf("%8s%10s%10.2f%8.2f%8.2f\n",
        students[i].Name,
        students[i].ID,
        students[i].Math_Score,
        students[i].English_Score,
        students[i].Score);
    printf("\n");
    printf("+----------+--------+--------+--------+--------+\n");
}


void show_student_byID(char ID[])
{
    int i = Student_SearchByIndex(ID);
    Student_DisplaySingle(i);
}

float average_score_one_course()
{
    float sum = 0;
    char input[20];
    printf("������Ҫ��ƽ���ֵĿγ�>:\n");
    scanf("%s", &input);
    if (strcmp(input, "Ӣ��") == 0)
    {
        for (int i = 0; i <= num; i++)
        {
             sum = sum + students[i].Math_Score;
        }
        return sum / num;
    }
    else if(strcmp(input, "��ѧ") == 0)
    {
        for (int i = 0; i <= num; i++)
        {
             sum = sum + students[i].English_Score;
        }
        return sum / num;
    }
    else
    {
        printf("δ�鵽,����������\n");
    }
}

//���ܳɼ�����
void sort_score_all()
{
    int i = 0;
    int j = 0;
    struct Student tmp;
    for (i = 0; i < num; i++)
    {
        for (j = 1; j < num - i; j++)
        {
            if (students[j - 1].Score < students[j].Score)
            {
                tmp = students[j - 1];
                students[j - 1] = students[j];
                students[j] = tmp;
            }
        }
    }
}