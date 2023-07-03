#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ROW 3
#define COL 3
//初始化棋盘为空格
void initialize(char board[ROW][COL], int row, int col);
//打印棋盘
void printfboard(char board[ROW][COL], int row, int col);
//玩家走
void plearmove(char board[ROW][COL],int row,int col);
//电脑走
void computermove(char board[ROW][COL], int row, int col);
//判断状态
char InWin(char board[ROW][COL], int row, int col);
//判断是否平局
int IsFull(char board[ROW][COL], int row, int col);


