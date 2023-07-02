#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

double power(double n, int k)
{
    if (k > 0)
        return power(n, k - 1) * n;
    else if (k == 0)
        return 1.0;
    else
        return 1.0 / power(n, -k);
}

int main()
{
    double n = 0.0; // 将 n 的类型更改为 double
    int k = 0;
    scanf("%lf %d", &n, &k); // 将 n 的输入格式符修改为 %lf
    printf("%lf\n", power(n, k)); // 将输出格式符修改为 %lf
    return 0;
}