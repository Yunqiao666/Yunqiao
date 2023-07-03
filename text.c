#include"game.h"
void manu()
{
	printf("********************************\n");
	printf("******     《三子棋》     ******\n");
	printf("********************************\n");
	printf("******     1.开始游戏     ******\n");
	printf("******     0.退出游戏     ******\n");
	printf("********************************\n");
}
void game()
{
	char board[ROW][COL];//储存数据到二维数组
	initialize(board, ROW, COL);//初始化棋盘为空格
	printfboard(board, ROW, COL);//打印棋盘
	//玩家走
	//电脑走
}
int main()
{
	int input = 0;
	do
	{
		manu();
		printf("请选择:>>");
		scanf("%d",&input);
		switch (input)
		{ 
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
        default:
			printf("输入错误请重新输入\n");
			system("cls");
			break;
		}

	}
	while (input);
	return 0;
}