
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int *p = NULL;
	p = (int *)malloc(sizeof(int) );
	if(p == NULL)
	{
		printf("分配失败\n");
		return -1;
	}

	*p = 10;
	printf("*p = %d\n", *p);
	
	if(NULL != p)
	{
		free(p);
		p = NULL; //这一步很重要
	}

	return 0;
}


