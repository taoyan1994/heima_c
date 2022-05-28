#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	int age;
	char *name; 
	int score;
}; //有分号

int main()
{
	struct Student *p;
	
	//需要给p分配内存
	p = (struct Student *)malloc(sizeof(struct Student));
	//1.age可以直接使用栈内存
	p->age = 18;
	//2.name
	p->name = (char *)malloc(strlen("LiLi")+1);
	strcpy(p->name,"WaWa");
	printf("name = %s\n",p->name);
	

	
	//先释放name
	if (p->name != NULL)
	{
		free(p->name);
		p->name = NULL;
	}
	
	
	//再释放p
	if (p != NULL)
	{
		free(NULL);
		p = NULL;
	}
	
	return 0;
}


