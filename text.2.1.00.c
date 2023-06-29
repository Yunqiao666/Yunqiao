#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////单分支
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("成年\n");
//	return 0;
//}
////双分支
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//	return 0;
//}
//多分支
int main()
{
	int age = 60;
	if (age < 18)
		printf("少年\n");
	else if (age >= 18 && age < 26)
		printf("青年\n");
	else if (age >= 26 && age < 40)
		printf("中年\n");
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age < 100)
		printf("老年\n");
	else
		printf("老不死\n");
	return 0;
}