#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//字面常量
#define MAX 10000
//int main()
//{
//	3.14;
//	10;
//	"a";
//	"ctq";
//	"崔";
//const修饰的常变量
//	const int 崔云乔 = 20;
	
//	printf("崔云乔=%d\n", 崔云乔);
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
