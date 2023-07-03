#include"game.h"

//初始化棋盘
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
//打印棋盘
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
//玩家行动
void plearmove(char board[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;
	printf("该您下棋：");
	while(1)
	{
		printf("输入棋的位置:>");
		scanf("%d %d", &a, &b);

		if (a >= 1 && a <= row && b >= 1 && b <= col)//判断棋步的有效性
		{
			if (board[a - 1][b - 1]==' ')
			{
				board[a - 1][b - 1] = '*';//下棋
				break;
			}
			else
			{
				printf("坐标被占用,请重新");
			}
		}
		else
		{
			printf("输入错误，请重试。\n");
		}
	}
}
//电脑行动
void computermove(char board[ROW][COL], int row, int col)
{
	printf("该电脑行动\n");
	while (1)
	{
		int c = rand() % row;
		int d = rand() % col;
		if (board[c][d] == ' ')
		{
			board[c][d] = '#';
			break;
		}
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
		  if(board[i][j] == ' ')
		  {
			  return 0;
		   }
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//横三行
	int x = 0;
	for (x = 0; x < row; x++) 
	{
		if (board[x][0] == board[x][1]&&board[x][1] == board[x][2]&&board[x][0] != ' ')
			return board[x][0];
	}
	//竖三行
	int y = 0;
	for (y = 0; y < row; y++)
	{
		if (board[0][y] == board[1][y]&&board[1][y] == board[2][y]&&board[0][y] != ' ')
			return board[0][y];
	}
	int r = IsFull(board, row, col);
	if (r == 1)
	return 'Q';
	else
	return 'c';
}
