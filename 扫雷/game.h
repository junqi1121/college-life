#define _CRT_SECURE_NO_WARNINGS
#define ROW 9//这里调整行数
#define COL 9//这里调整列数
#define ROWS ROW+2
#define COLS COL+2
#define BOMB 10/*在这里调整雷的个数！*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void initboard(char board[ROWS][COLS], int rows, int cols, char set);
void displayboard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char a[ROWS][COLS], char b[ROWS][COLS], int row, int col);