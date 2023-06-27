#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	//字符数组-一组相同类型的元素
	//char arr[]="hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',};
	//printf("%s\n",arr1);
	//printf("%s\n",arr2);
	//int len=strlen("abc");
	//string length
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}