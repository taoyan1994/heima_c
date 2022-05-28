#include <stdio.h>
#include <string.h>

struct Student
{
	int age;
	char name[50];
	int score;
}; //有分号

void setStu(struct Student tmp)
{
	tmp.age = 22;
	strcpy(tmp.name, "jiang");
	tmp.score = 77;
	printf("setStu %d, %s, %d\n", tmp.age, tmp.name, tmp.score);
}

int main(int argc, char *argv[])
{
	struct Student s1 = {18, "mike", 59};
	
	setStu(s1); //通过函数修改成员内容
	printf("%d, %s, %d\n", s1.age, s1.name, s1.score);
	
	return 0;
}