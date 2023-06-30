#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int nm = 1;
//
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		nm *= i;
//	}
//	printf("%d", nm);
//	return 0;
//}
//计算1！+2！+...+10！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int nm = 1;
//	int sum = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (n=1;n<=a;n++)
//	{
//		nm= 1;
//		for (i = 1; i <= n; i++)
//		{
//			nm *= i;
//		}
//		sum += nm;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int nm = 1;
//	int sum = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		nm *= i;
//		sum += nm;
//	}
//	printf("%d", sum);
//	return 0;
//}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int laft = 0;
	int right = sz - 1;
	while (laft<=right)
	{
		int mid = (laft + right) / 2;
		if (arr[mid] < k)
		{
			laft = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了：%d\n", mid);
			break;
		}

	}
	if (laft > right)
	{
		printf("找不到了\n");
	}
	return 0;
}
