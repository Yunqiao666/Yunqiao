//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char a1 = 'q';
//	char* pa = &a1;
//	return 0;
//}
//int main()
//{
//	//本质上是吧“hello bit”字符串的抽字符地址存储
//	char* pa = "hello bit";
//	char a1[] = "hello bit";
//	printf("%c\n", *pa);
//	return 0;
//}
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3[] = "hello bit.";
//	char* str4[] = "hello bit.";
//	if (str1 == str2)
//	    printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are notsame\n");
//	return 0;
//}
//int main()
//{
//	//指针数组
//	//int* arr[3];//存放整形指针的数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++);
//	{
//		printf("%d", * (arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//
//	int a[5] = { 1,2,3,4,5, };
//	int b[] = { 2,3,4,5,6, };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}