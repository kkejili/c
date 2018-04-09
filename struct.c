#include<stdlib.h>
#include<stdio.h>
struct student
{
	int xuehao;
	char *name;
	char *sex;
	int age;
	struct student *next;
};
typedef struct student studentlist;
studentlist *createstudentlist(int xuehao,char name[],char sex[],int age)
{
	studentlist *student01 = NULL;
	student01 = (studentlist *)malloc(sizeof(studentlist));
	if(student01 == NULL)
	{
		printf("malloc fail");
	}
	//memset(student01,0,sizeof(student01));
	student01->xuehao = xuehao;
	student01->name = name;
	student01->sex = sex;
	student01->age = age;
	student01->next = NULL;
	return student01;
}

int main()
{
	studentlist *student1 = createstudentlist(20180201,"lil","nan",22);
	printf("student01.xuehao:%d\n",student1->xuehao);
	printf("student01.xuehao:%s\n",student1->name);
	printf("student01.xuehao:%d\n",student1->age);
	printf("student01.xuehao:%s\n",student1->sex);
}