#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void two(int* a)
{
	(*a)++;
}
int main()
{
	int a = 0;
	two(&a);
	printf("%d",a);
	two(&a);
	printf("%d", a);
	two(&a);
	printf("%d", a);
	two(&a);
	printf("%d", a);
	return 0;
}
������Ƕ�׵��ú���ʽ����
int t3()
{
	printf("�Ǻ�");
}
int t2()
{
	t3();
	return 0;
}
int main()
{
	t2();
	return 0;
}
��ʽ����
int main()
{
	int a = strlen("abc");
	printf("%d\n", a);
	printf("&d\n", strlen("abc"));
	return 0;
}
int main()
{
	int a = 10;
    int b = 20;
	int c(int ,int);
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}
int Add(int x, int y)
{
	return x + y;
}