#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 13;
//	//��a�Ķ�����λ��5λ�ó�1
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	//��a�Ķ�����λ��5λ�ó�0
//	a = a & ~(1 << 4);
//	printf("%d\n", a);
//
//	return 0;
//}
//int main()
//{
//	int flg = 5;
//	if (flg)
//	{
//		printf("hehe\n");
//	}
//	if (!flg)
//		printf("haha\n");
//	printf("%d\n", !flg);//!flg=0
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	a = -a;
//	printf("%d\n", a);//a=-5
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//sizeof=4
//	printf("%d\n", sizeof(int));//sizeof=4
//	printf("%d\n", sizeof a);//sizeof=4
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s=a+2));//sizeof=2
//	printf("%d\n", sizeof s);//sizeof=4
//
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001--ԭ��
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000--��λȡ��
//	int b = ~a;
//	printf("%d\n", b);//b=0;
//
//	return 0;
//}
int main()
{
	int a = 10;

	printf("%d\n", a--);//a=-5

	return 0;
}