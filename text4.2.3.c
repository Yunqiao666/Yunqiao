#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdio.h>
//
//void printDiamond(int size) {
//    int space, i, j;
//
//    // ��ӡ�ϰ벿��
//    for (i = 1; i <= size; i++) {
//        for (space = 1; space <= size - i; space++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    // ��ӡ�°벿��
//    for (i = size - 1; i >= 1; i--) {
//        for (space = 1; space <= size - i; space++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int size;
//    printf("���������εĴ�С: ");
//    scanf("%d", &size);
//
//    printDiamond(size);
//
//    return 0;
//}
//int a;
//int num;
//int mai(n)
//{
//	for (int i = 1, a = 0; i <= n; i++)
//	{
//		if (n == 1)
//			return 0;
//		if (i == n)
//		{
//			if (i % 2 == 0)
//			{
//				a++;
//				num += a;
//				if (a == 1)
//				{
//					break;
//				}
//
//				mai(a);
//			}
//			else
//			{
//				num += a;
//				a++;
//				mai(a);
//			}
//		}
//		else if (i % 2 == 0)
//		{
//			a++;
//		}
//
//	}
//	return num;
//}
////int a = 0;
////int num = 0;
////int b = 0;
////int mai(n)
////{
////	int b = n;
////	while (n>=2)
////	{
////		b += n / 2;
////		n = n / 2 + n % 2;
////	}
////	return b;
////}
int main()
{
	int n = 10;
	printf("%d ", mai(n));
	return 0;
}
