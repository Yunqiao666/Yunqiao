#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//......
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//char ch[5] = { 'a', 'b', 'c' };
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}