#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(a)/sizeof(a[0]); //元素个数

	//首元素的下标
	int i = 0;

	//尾元素的下标
	int j = n - 1;

	//
	int tmp;

	while (i < j)
	{
		
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

		i++;
		j--;
	}
	

	for(i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");



	return 0;
}


