#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	//��Ա����
	char name[20];
	int age;
	char id[20];
}s1,s2;//s1,s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���
int main()
{
	//s�Ǿֲ�����
	struct Stu s;//����
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
	//��Ա����
	struct b sb;
	char name[20];
	int age;
	char id[20];
}s1, s2;
int main()
{
	struct Stu s = { {'a',20,3.14},"����",21,"c345678654"};
	//�ṹ���Ա���ʲ�������'.''->'
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
	struct Stu s = { {'a',20,3.14},"����",21,"c345678654" };
	//дһ��������ӡs������
	printf1(s);
	printf2(&s);
	return 0;
}