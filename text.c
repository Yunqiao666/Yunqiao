#include"game.h"
void manu()
{
	printf("********************************\n");
	printf("******     �������塷     ******\n");
	printf("********************************\n");
	printf("******     1.��ʼ��Ϸ     ******\n");
	printf("******     0.�˳���Ϸ     ******\n");
	printf("********************************\n");
}
void game()
{
	char board[ROW][COL];//�������ݵ���ά����
	initialize(board, ROW, COL);//��ʼ������Ϊ�ո�
	printfboard(board, ROW, COL);//��ӡ����
	//�����
	//������
}
int main()
{
	int input = 0;
	do
	{
		manu();
		printf("��ѡ��:>>");
		scanf("%d",&input);
		switch (input)
		{ 
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
        default:
			printf("�����������������\n");
			system("cls");
			break;
		}

	}
	while (input);
	return 0;
}