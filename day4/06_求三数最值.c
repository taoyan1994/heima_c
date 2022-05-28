#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	
	int max = a;
	
	if(b > max)
	{
		max = b;
	}
	
	if(c > max)
	{
		max = c;
	}
	printf("max = %d\n", max);
	
	
	return 0;
}


int main02()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int max;
	
	max = a > b ? a : b;
	printf("max = %d\n", max);
	
	max =  ( a > b ? a : b ) > c ?  ( a > b ? a : b ) : c ;
	
	
	return 0;
}


int main01(int argc, char *argv[])
{
	int a = 10;
	int b = 30;
	int c = 20;
	
	int max;
	
	if(a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	
	if(max > c)
	{
		printf("最大值为：%d\n", max);
	}
	else
	{
		printf("最大值为：%d\n", c);
	}

	return 0;
}


