#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	char main[ROWS][COLS] = { 0 };//建立雷数组
	char show[ROWS][COLS] = {0 };//建立数数组
	//初始化
	intboard(main, ROWS, COLS,'0');
	intboard(show, ROWS, COLS,'*');
	//打印棋盘
	printfboard(main[ROW][COL],ROW,COL);
	printfboard(show[ROW][COL],ROW,COL);

}

int main()
{
	printf("开始游戏\n");
	game();
	return 0;
}