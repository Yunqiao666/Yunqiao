#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[10] = { 1,2,3,4,5 };
//	int arr[] = { 1,2,3,4,5 };
//	int arr[5] = { 1,2,3,4,5 };
//	char ch[5] = { 'b','c','d' };
//	char ch[] = { 'b','c','d' };
//	char ch[5] = "bit";//b,i,t,\0,0
//	char ch[] = "bit";//b,i,t\0
//	char ch[] = "bit";
//	char ch[] = { 'b','i','t' };
//
//	int a1[10] = { 0 };
//	a1[4];
//
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//return;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
int main()
{
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int ara[3][4] = { 1,2,3,4,5,6,7 };
	//int arb[3][4] = { {1,2},{3,4},{5,6} };
	//int arc[3][] = { {1,2},{3,4},{5,6} };
	int ard[][4] = { {1,2},{3,4},{5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", ard[i][j]);
	}
	printf("\n");

	//int aed[2][3];



	return 0;
}