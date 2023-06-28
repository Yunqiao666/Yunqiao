#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//创建一个学生类型
struct Stu
{
	char name[20];
	int age;
	double score;
};
//创建一个书类型；
struct Book
{
	char name[20];
	float price;
	char id[30];

};
int main()
{
	struct Stu s={"张三", 20, 85.5};//结构体的创建和初始化
	printf("1.%s %d %f\n", s.name, s.age, s.score);
	//用指针变量打印
	struct Stu * ps = &s;
	printf("2.%s %d %f\n", (*ps).name,(*ps).age,(*ps).score);
	printf("3.%s %d %f\n",ps->name,ps->age,ps->score);

	return 0;
}