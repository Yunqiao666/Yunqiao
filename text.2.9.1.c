#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
int main()
{
	int arr[10] = {0};
	printf("%p\n", &arr+1);
	printf("%p\n",arr+1);
	//printf("%p\n",&arr[0]);
	//int sz = sizeof(arr);//��������ʾ��������
	//printf("%d\n",sz);
	//printf("%p n", &arr[ol);//printf(��%p\n"��arr);//����������Ԫ�صĵ�ַ
	return 0;
}