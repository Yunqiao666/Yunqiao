#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	int* p;//p为局部指针变量，未初始化，所以默认随机值。（野指针）
	*p = 20;//非法访问内存了
	printf("%p", p);
	return 0;
}
//越界访问
int main()
{
	int arr[10] = {0};
	int* p=arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}
	return 0;
}
text()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p=text();
	*p = 20;
	return 0;
}
int main()
{
	int a = 0;
	printf("a=%d\n", a);
	return 0;
}
int main()
{
	int* p = NULL;
	return 0;
}
//越界
int main()
{
	int* p = NULL;
	if (p != NULL)
		*P = 10;
	return 0;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int* pend = arr + 9;
	while (p <= pend)
	{
		printf("%d\n", *p);
		p++;
	}
	return 0;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

		printf("%d\n", &arr[9]-&arr[0]);//=9

	return 0;
}
int main()
{
	int len = strlen("abc");
		printf("%d\n", len);

	return 0;
}
int my_strlen(char* str)
{
	char* t = str;

	return 0;
}
