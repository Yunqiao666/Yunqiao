#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	register int num = 100;//建议num的值存放在寄存器中
	return 0;
}
//typedef类型重定义
typedef unsigned int u;
int main()
{   unsigned int num = 100;
	u nux = 100;
	return 0;
}
//static 静态的
//修饰局部变量
void text()
{
	static int a = 1;
	a++;
	printf("%d\n", a);

}
int main()
{
	int i = 0;
	while (i < 10)
	{
		text();
		i++;
	}
	return 0;
}
//修饰全局变量
extern int g_val;
int main()
{
	printf("%d\n,", g_val);
	return 0;
}
//static修饰函数
extern int Add(int x,int y)；

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}