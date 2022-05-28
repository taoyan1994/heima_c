#include <stdio.h>


int main(int argc, char *argv[])
{
	//1、空指针，给指针变量赋值为NULL
	//2、NULL就是数字0
	int * p = NULL;

	int a = 10;
	p = &a;

	if (p != NULL)
	{
		*p = 100;
	}

	printf("a = %d\n",a);
	return 0;
}