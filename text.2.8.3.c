#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int my(char*a1)
//{
//	int count = 0;
//	if (*a1 != '\n')
//	{
//		count++;
//			a1++;
//	}
//	return count;
//}
//void fan(char*a1)
//{
//	int left = 0;
//	int right = my(a1) - 1;
//	while (left<right)
//	{
//		char a2 = a1[left];
//		a1[left] = a1[right];
//		a1[right] = a2;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char a1[] = "asdasda";
//	fan(a1);
//	printf("%s", a1);
//	return 0;
//}
////µÝ¹é
//void fan(char*a1)
//{
//	char a2 = *a1;
//	int len=my()
//
//}
//int main()
//{
//	char a1[] = "asdasda";
//	fan(a1);
//	printf("%s", a1);
//	return 0;
//}
//¶Ô×Ö·û´®ÄæÏò´òÓ¡£º
// Ç¶Ì×£¬Ñ­»·£º
//// ¸¨2
//int my_sizeof(char* a1)
//{
//	int n = 0;
//	while (*a1 != '\0')
//	{
//		n++;
//		a1++;
//	}
//	return n;
//}
////¸¨1
//void reverse(char* a1)
//{
//	int left = 0;
//	int right = my_sizeof(a1) - 1;
//	while(left<right)
//	{
//		char l1 = a1[left];
//		a1[left] = a1[right];
//		a1[right] = l1;
//		left++;
//		right--;
//	}
//}
////Ö÷º¯Êý
//int main()
//{
//	char a1[] = "abcdefg";
//	reverse(a1);
//	printf("%s", a1);
//	return 0;
//}
//µÝ¹é£º
int my_sizeof(char* a1)
{
	int n = 0;
	while (*a1 != '\0')
	{
		n++;
		a1++;
	}
	return n;
}
void reverse(char* a1)
{
	char l1 = *a1;
	int len = my_sizeof(a1);
	*a1 = *(a1+len-1);
	*(a1+len-1) ='\0';
	if (my_sizeof(a1 + 1)>=2)
	{
		reverse(a1 + 1);
	}
	*(a1+len-1) = l1;
}
int main()
{
	char a1[] = "abcdefg";
	reverse(a1);
	printf("%s\n", a1);
	return 0;
}