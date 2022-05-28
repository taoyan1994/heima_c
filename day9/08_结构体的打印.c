#include <stdio.h>

struct Student
{
	int age;
	char name[50];
	int score;
}; //有分号

void fun(struct Student tmp)
{
	printf("%d, %s, %d\n", tmp.age, tmp.name, tmp.score);
	printf("&tmp = %p",&tmp);
}

void fun2(const struct Student *p)
//void fun2( struct Student const *p)
{
	//p->age = 22;
	printf("%d, %s, %d\n", p->age, p->name, p->score);
	
	//p = NULL;
}

int main(int argc, char *argv[])
{
	struct Student s1 = {18, "mike", 59};
	fun(s1);
	printf("&s1 = %p",&s1);//s1是个指针

	
	fun2(&s1);
	
	return 0;
}