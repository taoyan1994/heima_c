#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int *p;
	p = (int *)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("堆空间申请失败\n");
		return -1;
	}

	*p = 100;
	printf("*p = %d\n",*p);
	free(p);

	return 0;
}


