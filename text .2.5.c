#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////strcpy
//int main()
//{
//	char a1[20] = { 0 };
//	char a2[] =  "��ӭ��������\n" ;
//	strcpy(a1, a2);
//	printf("%s", a1,a2 );
//	return 0;
//}
//memset
int main()
{
	char b1[] = "��ӭ��������";
	memset(b1, 'x', 6);
	printf("%s\n", b1);
	return 0;
}