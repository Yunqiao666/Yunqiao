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
    double n = 0.0; // �� n �����͸���Ϊ double
    int k = 0;
    scanf("%lf %d", &n, &k); // �� n �������ʽ���޸�Ϊ %lf
    printf("%lf\n", power(n, k)); // �������ʽ���޸�Ϊ %lf
    return 0;
}