#define _CRT_SECURE_NO_WARNINGS 
#include"student.h"
struct Student
{
    char ID[20];    //学号
    char Name[20];  //姓名
    float Math_Score;
    float English_Score;
    float Score;
};

//声明学生数组
struct  Student students[1000];
int num = 0;
void show_student_all(int num)
{
    int i = 0;
    // 1、打印标题
    printf("+----------+--------+--------+--------+--------+\n");
    printf("|   姓名   |  学号  |  英语  |  数学  | 总成绩 |\n");
    printf("+----------+--------+--------+--------+--------+\n");
    // 2、使用for循环打印每个学生的姓名和成绩
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
        printf("请输入姓名:");
        scanf("%s", &students[num].Name);
        getchar();

        printf("请输入学号:");
        scanf("%s", &students[num].ID);
        getchar();

        printf("请输入数学成绩:");
        scanf("%f", &students[num].Math_Score);
        getchar();

        printf("请输入英语成绩:");
        scanf("%f", &students[num].English_Score);
        getchar();

        students[num].Score = students[num].Math_Score 
            + students[num].English_Score;
        num++;
        printf("是否继续?(y/n)");
        if (getchar() == 'n')
        {
            break;
        }
    }
}

/*通过姓名返回数组下标*/
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

/*通过学号返回数组下标*/
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
    printf("查找失败,请重新输入ID\n");
}

/*显示单条学生记录*/
void Student_DisplaySingle(int i)
{
    printf("+----------+--------+--------+--------+--------+\n");
    printf("|   姓名   |  学号  |  英语  |  数学  | 总成绩 |\n");
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
    printf("请输入要求平均分的课程>:\n");
    scanf("%s", &input);
    if (strcmp(input, "英语") == 0)
    {
        for (int i = 0; i <= num; i++)
        {
             sum = sum + students[i].Math_Score;
        }
        return sum / num;
    }
    else if(strcmp(input, "数学") == 0)
    {
        for (int i = 0; i <= num; i++)
        {
             sum = sum + students[i].English_Score;
        }
        return sum / num;
    }
    else
    {
        printf("未查到,请重新输入\n");
    }
}

//按总成绩排序
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