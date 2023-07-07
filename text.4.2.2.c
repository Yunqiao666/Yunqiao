#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//int zhihe(int x)
//{
//	int a = 1;
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		int j = 0;
//		for(j=1;j<i;j++)
//		{
//			a*=x;
//
//		}
//		a += a;
//	}
//	return a;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",zhihe(n));
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//写一个函数打印arr数组内容，不使用数组下标使用指针
//void printf1(char* parr,int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n",(*parr)+ i);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf1(&arr,sz);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf(&arr, sz);
//	int* p = arr;
//	int* prr = arr + sz - 1;
//	while (p <= prr)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//水仙花数
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = 0;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			printf("%d", i);
		}
	}
	return 0;
}