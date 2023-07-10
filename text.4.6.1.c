#include<stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* prt = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(prt - 1));
	return 0;
}
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
int main()
{
	printf("%p\n",+ 0x1);//0x100000
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n",(unsigned int*)p + 0x1);
	return 0;
}