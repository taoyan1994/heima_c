#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *p = NULL;

	p = (char *)malloc(0);
	if(p == NULL)
	{
		printf("分配失败\n");
		return 0;
	}

	strcpy(p, "mikejiang");
	printf("%s\n", p);
	
	free(p);
	


	return 0;
}