//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************************\n");
//	printf("*****    1. add    2. sub    *****\n");
//	printf("*****    3. mul    4. div    *****\n");
//	printf("*****         0. exit        *****\n");
//	printf("**********************************\n");
//}
//int input = 0;
//int main()
//{
//	//计算器-整数加减乘除
//	
//	do {
//		menu();
//		int x = 0;
//		int y = 0;
//		int ret = 0; 
//		printf("请选择=>\n");
//		int (*pfArr[4])(int，int)=（NIERscanf("%d", &input);
//		if (scanf("%d", &input) != 1) 
//		{
//			printf("输入错误！\n");
//			return 0; // 根据实际需要处理错误情况
//		}
//		printf("请输入两个操作数\n");
//		scanf("%d %d", &x,&y);
//        switch (input)
//		{
//		case 1:
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//		printf("ret=%d\n", ret);
//	} while (input);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("**********************************\n");
	printf("*****    1. add    2. sub    *****\n");
	printf("*****    3. mul    4. div    *****\n");
	printf("*****         0. exit        *****\n");
	printf("**********************************\n");
}
int input = 0;
int main()
{
	//计算器-整数加减乘除

	do {
		menu();
		int (*pfArr[5])(int,int) = { NULL,Add,Sub,Mul,Div };
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择=>\n");
		scanf("%d %d",&input);
		if (input >=1 && input <= 4)
		{
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret=%d\n", ret);
		}
		else if (input == 1)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}