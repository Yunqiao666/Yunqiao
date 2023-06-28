#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=10;//a在空间中要分配四个字节
	char ch = 'w';
	printf("%p\n");
	int* pa = &a;//pa用来存放地址,在c语言中pa叫指针变量
	//*说明pa是指针变量，int说明pa执行的对象是int类型的
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
	*pa = 20;//*解引用操作  *pa就是通过pa里面的地址，找到a
	printf("%d\n", a);//借助改变pa而改变a
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