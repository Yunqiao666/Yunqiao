#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int a = 10;
	int *pa = &a;
	*pa = 20;

	return 0;
}
int main()
{

	int* pa;
	char* pc;
	float* pf;
	printf("%d", sizeof(pa));
	printf("%d", sizeof(pc));
	printf("%d", sizeof(pf));
	return 0;
}
//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�����߶�Զ����������

int main()
{

	int i[10] = { 0 };
	int* p = i;
	char* pc=i;
	printf("%p\n", p);
	printf("%p\n", p+1);
	printf("%p\n", pc);
	printf("%p\n", pc+1);


	//int a = 0x11223344;
	//int* pa = &a;
	//*pa = 0;
	//char* pc = &a;
	//*pc = 0;

	return 0;
}
int main()
{
	int a1[10] = { 0 };
	int* p = a1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
	   *(p + i)=1;
	}
	return 0;
}
int main()
{
	int a1[10] = { 0 };
	char* p = a1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}