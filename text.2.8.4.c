#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////输入1729打印出其各位数之和
//int accumulate(i)
//{
//	if (i > 9)
//	{
//		return accumulate(i / 10) + i % 10;
//	}
//	else
//	{
//		return i;
//	}
//}
//int main()
//{
//	int i = 1729;
//	printf("%d\n", accumulate(i));
//	return 0;
//}
//实现n的k次方
double power(n, k)
{
	if (k > 0)
		return power(n, k - 1) * n;
	else if (k == 0)
		return 1.0;
	else 
		return 1,0 / (power(n, -k));
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	printf("%d\lf",power(n,k));
	return 0;
}