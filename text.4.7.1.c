#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////���ַ�������
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
//��һ���ַ�����������һ���ַ���strcpy
//int main()
//{
//	char a1[20] = { 0 };
//	//a1 = "hello";
//	strcpy(a1, "hello");
//	printf("%s", a1);
//	return 0;
//}
//�ַ�������׷��strcat
void my_strcat(char* dest, const char* src)
{
	//��Ϊ��ָ��
	assert(dest && src);
	//��"\0"
	while (*dest)
	{
		dest++;
	}
	//׷��Դ�ַ���������"\0"
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

