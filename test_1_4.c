#include<stdio.h>
float ggg = 2021;
extern int gggg;
int main()
{
	printf("崔云乔\n");
	{int a = 10;
	printf("a=%d\n", a);
	printf("gggg=%d\n", gggg); }
	printf("ggg=%f\n", ggg);
	return 0;
}