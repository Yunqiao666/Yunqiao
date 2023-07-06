#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int nb (int n)
//{
//	int i = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			i++;
//		}
//		n /= 2;
//	}
//	n = n / 2;
//	return i;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=nb(n);
//	printf("%d", ret);
//	return 0;
//}
//int nb(int n)
//{
//	int j = 0;
//	int i = n|0;
//	int a = 0;
//	for (j = 0; j < 32; j++)
//	{
//		if (i == 0);
//		{
//			a++;
//		}
//	}
//	
//	return a;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = nb(n);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//获取整数二进制序列奇数位和偶数位
//	
//	return 0;
//}
#include <stdio.h>

int main() {
    int num;

    for (num = 123; num <= 432; num++) {
        int digit1 = num / 100;
        int digit2 = (num / 10) % 10;
        int digit3 = num % 10;

        if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3)
            printf("%d\n", num);
    }

    return 0;
}