#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void youxi()
{
	int b = 0;
	int a = rand()%100+1;
	while (1)
	{
		printf("�²�����:>");
		scanf("%d", &b);
		if (b < a)
		{
			printf("��С��\n");
		}
		else if (b > a)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��,�¶���\n");
			break;
		}
	}
}


int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;

	do
	{
		printf("*****************************\n");
		printf("********   1.play   *********\n");
		printf("********   0.exit   *********\n");
		printf("*****************************\n");
		printf("��ѡ��:>");
		scanf("%d", &i);
	    switch(i)
		{
		case 1:
			    youxi();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("�������������\n");
			    break;
		}
	} while (i);


	return 0;
}