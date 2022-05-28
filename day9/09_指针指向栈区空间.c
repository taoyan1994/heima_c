#include <stdio.h>
#include <string.h>

struct Student
{
	int age;
	char name[50];
	int score;
}; //有分号

int main(int argc, char *argv[])
{
	//定义一个结构体类型的指针
	struct Student *p;

	//在栈区定义一个结构体变量
	struct Student tmp;

	p = &tmp;

	p->age = 10;
	stpcpy(p->name,"Bob");
	p->score = 100;

	printf("通过指针p读取 %d, %s, %d\n",p->age,p->name,p->score);
	printf("通过变量tmp读取 %d, %s, %d\n",tmp.age,tmp.name,tmp.score);



	return 0;
}


