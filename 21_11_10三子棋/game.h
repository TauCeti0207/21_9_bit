#pragma once
#define ROW 5
#define COL 5
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void player_move(char board[ROW][COL], int row, int col);
//电脑下棋
void computer_move(char board[ROW][COL], int row, int col);

//判断输赢
//玩家赢了 -'*'
//电脑赢了 -'#'
//平局 - 'Q'
//游戏继续 - 'C'
char is_win(char board[ROW][COL], int row, int col);