#include <stdio.h>


int main(int argc, char *argv[])
{
	int i;
	int j;

	for (size_t i = 1; i <= 9; i++)
	{
		for (size_t j = 1; j <= i; j++)
		{
			printf("%ld * %ld = %ld\t",i,j,i*j);
		}
		printf("\n");
		
	}
	

	return 0;
}


