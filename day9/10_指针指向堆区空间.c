
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

	//指针指向堆区空间
	p = (struct Student *)malloc(sizeof(struct Student));
	if (p == NULL)
	{
		printf("堆空间申请失败\n");
		return -1;
	}

	//使用堆空间指针
	p->age = 18;
	printf("age = %d\n",p->age);

	if (p != NULL)
	{
		//释放内存
		free(p);

		//野指针处理
		p = NULL;
	}
	
	return 0;
}