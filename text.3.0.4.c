#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	return 0;
//}
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);//c=-126
//	return 0;
//}
////实现函数int()初始化数组全为0
////实现print()打印数组的每个元素
////实现reverse()函数完成数组元素的逆置
//void reverse(int a1[], int az)
//{
//	int t = 0;
//	int w = az-1;
//	int a2;
//	while(t < w)
//	{
//		a2 = a1[t];
//		a1[t] = a1[w];
//		a1[w] = a2;
//		t++;
//		w--;
//	}
//}
//void CHU(int a1[], int az)
//{
//	int i;
//	for (i = 0; i < az; i++)
//	{
//	 a1[i] = 0;
//	}
//}
//void printf_m(int a1[],int az)
//{
//	int j = 0;
//	for (j = 0; j < az; j++)
//	{
//		printf("%d ", a1[j]);
//	}
//}
//int main()
//{
//	int a1[10] = {1,2,3,4,5,6,7,8,9,10};
//	int az = sizeof(a1) / sizeof(a1[0]);
//	printf_m(a1, az);
//	printf("\n");
//	reverse(a1, az);
//	printf_m(a1, az);
//	printf("\n");
//	CHU(a1,az);
//	printf_m(a1,az);
//
//	return 0;
//}