#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a1[10] = { 1,2,3,4,5,6,7,8,9,10};
	printf("%p\n", a1);
	printf("%p\n", &a1[0]);

	return 0;
}
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%p\n",&arr[i],p+i);
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n",*(p + i)S);
	}
	return 0;
}
int mian()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	//arr[2]==*(arr+2)==*(p+2)==*(2+arr)==*(2+p)==2[arr]
	return 0;
}
int main()
{
	int a = 10;
	int* pa = &a;
	//ppa����ָ�����
	int**ppa=&pa;//paҲ���Ǹ�������&paȡ��pa�ĵ�ַ������ppa.
	return 0;
}
int main()
{
	int arr[10];//��������
	char ch[5];//�ַ�����
	//���ָ�������
	int* parr[5];//����ָ�������
	char* pch[5];//�ַ�ָ�������
	return 0;
}