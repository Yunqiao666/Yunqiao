#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	//成员变量
	char name[20];
	int age;
	char id[20];
}s1,s2;//s1,s2也是结构体变量
//s1,s2是全局变量
int main()
{
	//s是局部变量
	struct Stu s;//对象
	return 0;
}
struct b
{
	char c;
	short d;
	double e;
};
struct Stu
{
	//成员变量
	struct b sb;
	char name[20];
	int age;
	char id[20];
}s1, s2;
int main()
{
	struct Stu s = { {'a',20,3.14},"李四",21,"c345678654"};
	//结构体成员访问操作符：'.''->'
	printf("%c\n", s.sb.c);
	printf("%s\n", s.id);
	//->
	struct Stu* ps = &s;
	printf("%c\n", (*ps).sb.c);
	printf("%c\n", ps->sb.c);
	return 0;
}
void printf1(struct Stu s)
{
	printf("%c %d %f %s %d %s\n",s.sb.c, s.sb.d, s.sb.e, s.name, s.age, s.id);
}
void printf2(struct Stu* ps)
{
	printf("%c %d %f %s %d %s\n", ps->sb.c, ps->sb.d, ps->sb.e, ps->name, ps->age, ps->id);
}

int main()
{
	struct Stu s = { {'a',20,3.14},"李四",21,"c345678654" };
	//写一个函数打印s的内容
	printf1(s);
	printf2(&s);
	return 0;
}