#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ROW 3
#define COL 3
//��ʼ������Ϊ�ո�
void initialize(char board[ROW][COL], int row, int col);
//��ӡ����
void printfboard(char board[ROW][COL], int row, int col);
//�����
void plearmove(char board[ROW][COL],int row,int col);
//������
void computermove(char board[ROW][COL], int row, int col);
//�ж�״̬
char InWin(char board[ROW][COL], int row, int col);
//�ж��Ƿ�ƽ��
int IsFull(char board[ROW][COL], int row, int col);


