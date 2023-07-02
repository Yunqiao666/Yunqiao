#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
int main()
{
	int arr[10] = {0};
	printf("%p\n", &arr+1);
	printf("%p\n",arr+1);
	//printf("%p\n",&arr[0]);
	//int sz = sizeof(arr);//数组名表示整个数组
	//printf("%d\n",sz);
	//printf("%p n", &arr[ol);//printf(”%p\n"，arr);//数组名是首元素的地址
	return 0;
}