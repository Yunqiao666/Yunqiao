#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	/*int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n", sizeof(&a[0] + 1));*/

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4/8数组名表示首元素地址（非单独存放在括号内）
	//printf("%d\n", sizeof(*arr));//1首元素a的地址
	//printf("%d\n", sizeof(arr[1]));//1b的地址
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr+0));//随机值
	//printf("%d\n", strlen(*arr));//出错
	//printf("%d\n", strlen(arr[1]));//出错
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0]+1));//随机值

	char arr[] = "abcdef";
	//字符串的结束标志是"\0"
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//出错
	printf("%d\n", strlen(arr[1]));//出错
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//7

	return 0;
}