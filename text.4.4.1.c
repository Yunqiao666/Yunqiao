#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubbling(int a1[],int sz)//冒泡函数
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//确定趟数
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (a1[j] > a1[j + 1])
			{
				int tmp = a1[j];
				a1[j] = a1[j + 1];
				a1[j + 1] = tmp;
			}
		}

	}
}
void printf_h(int a1[],int az)
{
	int i = 0;
	for (i = 0; i < az; i++)
	{
		printf("%d ", a1[i]);
	}
	printf("\n");
}
int main()
{
	int a1[10] = { 9,8,7,6,5,4,3,2,1,0 };//建立数组
	int sz = sizeof(a1) / sizeof(a1[0]);//算出数组元素个数
	printf_h(a1, sz);//打印变化前数组
	bubbling(a1, sz);//变化函数
	printf_h(a1, sz);//打印变化后数组
	return 0;
}