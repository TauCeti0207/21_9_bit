#pragma once
#define ROW 5
#define COL 5
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void player_move(char board[ROW][COL], int row, int col);
//��������
void computer_move(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//���Ӯ�� -'*'
//����Ӯ�� -'#'
//ƽ�� - 'Q'
//��Ϸ���� - 'C'
char is_win(char board[ROW][COL], int row, int col);