#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Stu
{
	char name[20];
	char sex[2];
	int age;
	char telephone[12];
};
int main()
{
	struct Stu s;
	printf("请输入学生信息：\n");
	scanf_s("%s %s %f %s", s.name, s.sex, &s.score, s.telephone);
	printf("Info:\n",s);
	return 0;
}