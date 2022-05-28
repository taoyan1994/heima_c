#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("首元素地址 = %p\n",&a[0]);
	printf("数组名地址 = %p\n",a);

	int *p = &a[0];

	for (int i = 0; i < 10; i++)
	{
		printf("a[i] = %d\n",*(p+i));
	}
	


	return 0;
}