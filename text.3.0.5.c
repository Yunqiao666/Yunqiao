#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a + b * 7;
//	int d = a + b + c;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d", sizeof(arr));
//
//	return 0;
//}

//将数组a与数组b里的元素交换（数量相同）
void interchange(char a1[], char a2[],int sz)
{
	int t = 0;
	int w = sz;
	int a = 0;
	while (a< w)
	{
		a = a1[t];
		a1[t] = a2[t];
		a2[t] = a;
		a++;
	}
}
void printf_m(int a1[],int az)
{
	int j = 0;
	for (j = 0; j < az; j++)
	{
		printf("%d ", a1[j]);
	}
}

int main()
{
	int a1[5] = { 1,2,3,4,5 };
	int a2[5] = { 5,4,3,2,1 };
	int sz = sizeof(a1) / sizeof(a1[0]);
	printf_m(a1, sz);
	printf("\n");
	printf_m(a2, sz);
	printf("\n");
	int t = 0;
	for (t = 0; t < sz; t++)
	{
		int x = a1[t];
		a1[t] = a2[t];
		a2[t] = x;
	}
	//interchange(a1, a2,sz);
	printf_m(a1, sz);
	printf("\n");
	printf_m(a2, sz);
	return 0;
}