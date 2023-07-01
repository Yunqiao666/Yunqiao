#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////100-200之间的素数
//int is(int x)
//{
//	int a = 0;
//	for (int a = 2; a < x; a++)
//	{
//		if (x % a == 0)
//			return 0;
//     }
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int Z = 0;
//		for (i =100;i <= 200; i++)
//		{
//			if (is(i) == 1)
//			{
//				Z++;
//				printf("%d ", i);
//			}
//		}
//		printf("Z=%d\n", Z);
//	return 0;
//}
////判断一年份是不是闰年
//int run(x)
//{
//	if (x % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if(run(a)==1)
//	{
//		printf("%d是闰年", a);
//	}
//	printf("%d不是闰年", a);
//	return 0;
//}
//整形有序数组二分制查找
#include <stdio.h>

int two(int a[], int i, int s) {
    int t = 0;
    int w = s - 1;

    while (t <= w) {
        int h = (t + w) / 2;

        if (a[h] > i) {
            w = h - 1;
        }
        else if (a[h] < i) {
            t = h + 1;
        }
        else if (a[h] == i) {
            return h;
        }
    }

    return -1;
}

int main() {
    char a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int i = 7;
    int d = sizeof(a1) / sizeof(a1[0]);

    // 找到了就返回找到位置下标
    int a = two(a1, i, d);

    if (-1 == a) {
        printf("找不到\n");
    }
    else {
        printf("找到了, 下标是：%d\n", a);
    }

    return 0;
}