#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	char main[ROWS][COLS] = { 0 };//����������
	char show[ROWS][COLS] = {0 };//����������
	//��ʼ��
	intboard(main, ROWS, COLS,'0');
	intboard(show, ROWS, COLS,'*');
	//��ӡ����
	printfboard(main[ROW][COL],ROW,COL);
	printfboard(show[ROW][COL],ROW,COL);

}

int main()
{
	printf("��ʼ��Ϸ\n");
	game();
	return 0;
}