#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//除法
//	int a = 6/5;//=1
//	printf("%d", a);
//
//	float b = 6.0 / 5;//=1.20000
//
//	printf("%f", b);//=1
//	//取模
//	int c = 7 % 3;//=1
//	printf("%d", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = a << 1;//b=4
//	printf("b=%d\n",b);
//	int c = 10;
//	int d = c >> 1;//d=5
//	printf("b=%d\n", b);
//	//“ -1 ”在二进制中：
//	//原码：10000000000000000000000000000001
//	//“ -1 ”在二进制中：
//	//反码：11111111111111111111111111111110
//	//“ -1 ”在二进制中：
//	//补码：11111111111111111111111111111111
//	int a = -1;
//	int b = a >> 1;//b=-1
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//    //a:00000000000000000000000000000011
//	//b:00000000000000000000000000000101
//  //a&b:00000000000000000000000000000001
//	printf("c=%d\n", c);
//
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	//a:00000000000000000000000000000011
//	//b:00000000000000000000000000000101
//  //a|b:00000000000000000000000000000111
//	printf("c=%d\n", c);
//
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//对应的二进制位进行异或，相同为"0",先异为"1"
//	//a:00000000000000000000000000000011
//	//b:00000000000000000000000000000101
//  //a|b:00000000000000000000000000000110
//	printf("c=%d\n", c);
//	return 0;
//}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int j = 0;
	for (i = 0; i < a; i++)
	{
		a = (a>>i)^ 1;
		j += a;
	}
	printf("%d的二进制位有%d个1\n",a,j);

	return 0;
}