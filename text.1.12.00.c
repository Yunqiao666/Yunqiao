#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	register int num = 100;//����num��ֵ����ڼĴ�����
	return 0;
}
//typedef�����ض���
typedef unsigned int u;
int main()
{   unsigned int num = 100;
	u nux = 100;
	return 0;
}
//static ��̬��
//���ξֲ�����
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
//����ȫ�ֱ���
extern int g_val;
int main()
{
	printf("%d\n,", g_val);
	return 0;
}
//static���κ���
extern int Add(int x,int y)��

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}