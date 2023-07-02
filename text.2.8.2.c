#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1-1/2-1/3-1/4-...-1/100的值

//int main()
//{
//	int i= 0;
//	double a = 0.0;
//	int n = 100;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//			a -= 1.0 / i;
//		else
//			a += 1.0 / i;
//	}
//	printf("%f", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double a = 0.0;
//	int n = 100;
//	int z = 1;
//	for (i = 1; i <= n; i++)
//	{
//		a += z * 1.0 / i;
//		z = -z;
//	}
//	printf("%f", a);
//	return 0;
//}
////求十个整数中的最大值
//int main()
//{
//	int a1[20] = { -7,-3,-5,-9,-1,-3,-6,-8,-5,-3};
//	int max = a1[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (a1[i] > max)
//		{
//			max = a1[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//输出乘法口诀表
int x(int i,int a)
{
	return i * a;

}
int main()
{
	int i = 1;
	for (i = 1; i<= 9; i++)
	{
		int a = 0;
		for (a = 1; a <= i; a++)
		{
			printf("%d*%d=%-2d ",i,a,x(i,a));
		}
		printf("\n");
	}
	return 0;
}