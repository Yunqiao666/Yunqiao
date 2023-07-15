#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>g
int main()
{
	char a1[20] = "abcd";

	strcat(a1, a1);
	printf("%s\n", a1);
	return 0;
}
int main()
{
	char a1[] = "AABCD";
	char a2[] = "BCDAA";
	int ret = is_string_rotate(a1, a2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

