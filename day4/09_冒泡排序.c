#include <stdio.h>
#define SIZE 10

int main(int argc, char *argv[])
{
	int a[SIZE] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
	
	//外层循环
	for (int i = 0; i < SIZE-1; i++)
	{
		for (int j = 0; j < SIZE-1-i; j++)
		{	
			if (a[i] < a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;			
			}
		}
		
	}
	
	printf("排序后: ");
	for(int i = 0; i < SIZE; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
	
	
	
	


	return 0;
}
