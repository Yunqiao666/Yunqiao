#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char a1[20] = { 0 };
//	char a2[] = "abc";
//	strcpy(a1, a2);
//	printf("%s\n", a1);
//	return 0;
//}
////дһ�����������ҳ����������е����ֵ
////Ƕ��
// //int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else if (b > a)
//		printf("%d\n", b);
//	else
//		printf("���\n");
//
//	return 0;
//}
//�����������α�����ֵ
void t(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰ��a=%d,b=%d", a, b);
	t(&a, &b); t(a, b);
	printf("������a=%d,b=%d", a, b);
	return 0;
}
