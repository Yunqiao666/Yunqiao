#include<stdio.h>
int main()
{
	short s = 5;
	int a = 4;
	printf("%d\n", sizeof(s = a + 6));//sizeof���ʽ�ڲ���������
	printf("%d\n", s);

	return 0;
}