#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

//≥ı ºªØ∆Â≈Ã
void initialize(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
        }
	}
}
//¥Ú”°∆Â≈Ã
void printfboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for  (i = 0; i < row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int l = 0;
			for (l = 0; l < row ;l++)
			{
				printf("---");
				if (l < row - 1)
					printf("|");
			}
			printf("\n");
		}
		//printf("---|---|---\n");
	}
}
