#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	int age;
	char *name; 
	int score;
}; //有分号

//成员变量指针指向堆区空间
int main()
{
	struct Student s;
	s.age = 18;
	s.name = (char *)malloc(strlen("Bob") + 1);
	strcpy(s.name,"Tom");
	s.score = 59;
	
	printf("%d, %s, %d\n", s.age, s.name, s.score);
	
	
	if(s.name != NULL)
	{
		free(s.name);
		s.name = NULL;
	}
	
	
	return 0;
}