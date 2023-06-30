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
		printf("猜猜数字:>");
		scanf("%d", &b);
		if (b < a)
		{
			printf("猜小了\n");
		}
		else if (b > a)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你,猜对了\n");
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
		printf("请选择:>");
		scanf("%d", &i);
	    switch(i)
		{
		case 1:
			    youxi();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("输入错误请重试\n");
			    break;
		}
	} while (i);


	return 0;
}