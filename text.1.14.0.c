#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=10;//a�ڿռ���Ҫ�����ĸ��ֽ�
	char ch = 'w';
	printf("%p\n");
	int* pa = &a;//pa������ŵ�ַ,��c������pa��ָ�����
	//*˵��pa��ָ�������int˵��paִ�еĶ�����int���͵�
	char* pc = &ch;
	return 0;
}
int main()
{
	int* pa = &pa;
	return 0;
}
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;//*�����ò���  *pa����ͨ��pa����ĵ�ַ���ҵ�a
	printf("%d\n", a);//�����ı�pa���ı�a
	return 0;
}
int main()
{
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
    return 0;
}