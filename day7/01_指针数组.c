#include <stdio.h>


int main(int argc, char *argv[])
{
	//普通数组
	int a[3] = {10, 20, 30};

	//指针数组，它是数组，每个元素都是指针
	int * p[3];
	p[0] = &a[0];
	p[1] = &a[1];
	p[2] = &a[2];


	for (int i = 0; i < 3; i++)
	{
		printf("&a[i] = %p\n",&a[i]);
		printf("p[i]  = %p\n",p[i]);
		printf("\n");
	}

		for (int i = 0; i < 3; i++)
	{
		printf("%d\n",*p[i]);
		printf("\n");
	}
	


	


	return 0;
}
