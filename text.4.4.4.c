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
	//printf("%d\n", sizeof(arr + 0));//4/8��������ʾ��Ԫ�ص�ַ���ǵ�������������ڣ�
	//printf("%d\n", sizeof(*arr));//1��Ԫ��a�ĵ�ַ
	//printf("%d\n", sizeof(arr[1]));//1b�ĵ�ַ
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//

	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr+0));//���ֵ
	//printf("%d\n", strlen(*arr));//����
	//printf("%d\n", strlen(arr[1]));//����
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));//���ֵ
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ

	char arr[] = "abcdef";
	//�ַ����Ľ�����־��"\0"
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//����
	printf("%d\n", strlen(arr[1]));//����
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//7

	return 0;
}