#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void intboard(char board[ROWS][COLS], int rows, int cols,char a)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = a;
		}
	}
}
//��ӡ����
void printfboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------------------------------\n");
	for(i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("-----------------------------------\n");

	}
}