#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////����֧
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("����\n");
//	return 0;
//}
////˫��֧
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//	return 0;
//}
//���֧
int main()
{
	int age = 60;
	if (age < 18)
		printf("����\n");
	else if (age >= 18 && age < 26)
		printf("����\n");
	else if (age >= 26 && age < 40)
		printf("����\n");
	else if (age >= 40 && age < 60)
		printf("׳��\n");
	else if (age >= 60 && age < 100)
		printf("����\n");
	else
		printf("�ϲ���\n");
	return 0;
}