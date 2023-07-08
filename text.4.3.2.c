#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    float a;
    int b;
    int c;
    int d;
    scanf("%f %d %d %d", &a, &b, &c, &d);
    while (a >= 1 && a <= 100000)
    {
        if (b == 11, c == 11)
            a = a * 0.7;
        else if (b == 12, c == 12)
            a = a * 0.8;
        if (d == 1)
            a = a - 50;
        break;
    }
    printf("%.2f\n", a);
    return 0;
}