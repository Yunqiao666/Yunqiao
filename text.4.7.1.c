#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////求字符串长度
//int my_strlen(char* x)
//{
//	int i = 0;
//	assert( x != NULL);
//	while (*x != '\0')
//	{
//		x++;
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char a1[] = "abc";
//	char a2[] = { 'a','b','c' };
//	printf(" %d",strlen(a1));
//	printf("%d", my_strlen(a1));
//
//	return 0;
//}
//将一个字符串拷贝到另一个字符串strcpy
//int main()
//{
//	char a1[20] = { 0 };
//	//a1 = "hello";
//	strcpy(a1, "hello");
//	printf("%s", a1);
//	return 0;
//}
//字符串连接追加strcat
void my_strcat(char* dest, const char* src)
{
	//不为空指针
	assert(dest && src);
	//找"\0"
	while (*dest)
	{
		dest++;
	}
	//追加源字符串，包含"\0"
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char a1[20] = "hello";
	char a2[] = "world";
	my_strcat(a1, a2);
	printf("%s", a1);
	return 0;

}

