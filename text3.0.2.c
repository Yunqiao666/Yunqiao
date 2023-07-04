#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	int *pa = &a;
//	*pa=20;//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//	//
//	b = (a > 5 ? 1:1);
//	
//	return 0;
//}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	//从左向右依次计算最后结果为最后一个表达式结果。
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	printf("%d", d);
	return 0;
}