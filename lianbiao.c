//写一个函数insert，用来向一个动态链表插入结点
//问题分析，首先构建动态链表，之后实现insert函数
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


void insert(start,end,studentlist)
{
	
}
int main()
{
	studentlist *student1 = createstudentlist(20180201,"lil","nan",22);
	printf("student01.xuehao:%d\n",student1->xuehao);
	printf("student01.xuehao:%s\n",student1->name);
	printf("student01.xuehao:%d\n",student1->age);
	printf("student01.xuehao:%s\n",student1->sex);
}