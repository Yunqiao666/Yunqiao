#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
int main()
{
	cvoid my_strcat(char* dest, const char* src)
	{
		//不为空指针
		assert(dest && src);
		//找"\0" 
		while (*dest)
		{
			dest++;
		}
		//追加源字符串，包含"\0"
		while (*dest++ = *src++)
		{
			;
		}
	}z
	{
		char a1[20] = "hello";
		char a2[] = "world";
		my_strcat(a1, a2);
		printf("%s", a1);
		return 0;
	}

	*p = "abc";
	char* q = "abcdef";
	return 0;
}
void my_strcat(char* dest, const char* src)
{
	//不为空指针
	assert(dest && src);
	//找"\0" 
	while (*dest)
	{
		dest++;
	}
	//追加源字符串，包含"\0"
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char a1[20] = "hello";
	char a2[] = "world";
	my_strcat(a1, a2);
	printf("%s", a1);
	return 0;
}

void my_strcat(char* dest, const char* src)
{
	//不为空指针
	assert(dest && src);
	//找"\0" 
	while (*dest)
	{
		dest++;
	}
	//追加源字符串，包含"\0"
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char a1[20] = "hello";
	char a2[] = "world";
	my_strcat(a1, a2);
	printf("%s", a1);
	return 0;
}

int main()
{
	const char* p = "obc";
	const char* q = "abcdef";
	if (p > q)
	{
		printf(">\n");
	}
	else
	{
		printf("<+\n");
	}
	return 0;
}
