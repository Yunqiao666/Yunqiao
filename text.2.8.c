#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
void text(n)
{
	if (n <= 1000)
	{
		text(n + 1);
		printf("%d ", n);
	}
}
int main()
{
	text(1);
	return 0;
}