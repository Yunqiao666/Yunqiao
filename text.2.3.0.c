#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	for (; i <= 10; i++)
	{
		printf(" %d", i);
	}
	return 0;
}
int main()
{
	int i = 0;
	for ( i = 1 ; i <= 10; i++ )
	{
		if (i == 5)
			break;
		printf(" %d", i);
	}
	return 0;
}
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf(" %d", i);
	}
	return 0;
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (int i = 0; i <= 10, i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
int main()
{
	for (;;)
	{
		printf("hehe");
	}

	return 0;
}
int main()
{
	int j = 0;
	int i = 0;
	for(;i<3;i++)
	{ 
		for (j=0; j < 3; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}
int main()
{
	int x,y = 0;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}

	return 0;
}
int main()
{
	int i, k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}