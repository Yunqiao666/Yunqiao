#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ��ѧ������
struct Stu
{
	char name[20];
	int age;
	double score;
};
//����һ�������ͣ�
struct Book
{
	char name[20];
	float price;
	char id[30];

};
int main()
{
	struct Stu s={"����", 20, 85.5};//�ṹ��Ĵ����ͳ�ʼ��
	printf("1.%s %d %f\n", s.name, s.age, s.score);
	//��ָ�������ӡ
	struct Stu * ps = &s;
	printf("2.%s %d %f\n", (*ps).name,(*ps).age,(*ps).score);
	printf("3.%s %d %f\n",ps->name,ps->age,ps->score);

	return 0;
}