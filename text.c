#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���泣��
#define MAX 10000
//int main()
//{
//	3.14;
//	10;
//	"a";
//	"ctq";
//	"��";
//const���εĳ�����
//	const int ������ = 20;
	
//	printf("������=%d\n", ������);
//	int n = MAX;
//	printf("n=%d\n", n);

//	return 0;
//}
enum Sex 
{
	MALE,
	FEMALE,
	SECRET,
};
int main()
{
	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}
