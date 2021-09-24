#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASYCOUNT 10
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);