#pragma once
#include<stdio.h>
#include<string.h>


void show_student_all(int num);
void insert_student();
float score_sum_student(int num);
int Student_SearchByName(char name[]);
void Student_DisplaySingle(int i);
void show_student_byID(char ID[]);
int Student_SearchByIndex(char id[]);
float average_score_one_course();
void sort_score_all();