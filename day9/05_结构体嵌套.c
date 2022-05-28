#include <stdio.h>
#include <string.h>

struct Info
{
	int age;
	char name[50];
};

struct Student
{
	struct Info info1;
	int score;
};


int main(int argc, char *argv[])
{
	struct Student s;
	s.info1.age = 18;
	strcpy(s.info1.name, "mike");
	s.score = 59;
	
	struct Student *p = &s;
	p->info1.age = 18;
	strcpy(p->info1.name, "mike");
	p->score = 59;
	
	struct Student tmp = {18, "mike", 59};
	printf("%d, %s, %d\n", tmp.info1.age, tmp.info1.name, tmp.score);
	

	return 0;
}