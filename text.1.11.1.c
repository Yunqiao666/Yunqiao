#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1000;
	printf("%d\n", ~a);
	return 0;
}
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
int main()
{
	int a = (int)3.14;

	printf("%d\n", a);
	return 0;
}
int main()
{
	int a = 3;
	int b = 0;
	int c = a || b;
	printf("%d\n", c);
	return 0;
}
int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	/*if (a > b)
		max = a;
	else
		max = b;*/
	  max=a > b ? a : b;
	printf("%d\n", max);
	return 0;
}
int main()
{
	//(2, 4 + 5, 6);
	int a = 0;
	int b = 3;
	int c = 5;
	int d = (a = b + 2, c = a - 4, b = c + 2);
	printf("%d\n", d);
	return 0;
}
 下标引用操作符
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n",arr[5]);
	return 0;
}
函数调用操作符
int main()
{
	printf("cuiyunqiao\n");
	printf("%d\n",100);
	return 0;
}
