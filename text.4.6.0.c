#include<stdio.h>
int main()
{
	short s = 5;
	int a = 4;
	printf("%d\n", sizeof(s = a + 6));//sizeof表达式内不参与运算
	printf("%d\n", s);

	return 0;
}