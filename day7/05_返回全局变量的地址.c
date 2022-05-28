#include <stdio.h>

//1、在{}外面定义的变量，就是全局变量，全局变量任何地方都能使用
//2、全局变量只有在整个程序结束后，才释放
int a;

int *fun()
{
	return &a; //fun()调用完毕，a不释放
}

int main(int argc, char *argv[])
{
	int *p = NULL;
	p = fun();

	*p = 100;
	printf("*p = %d\n", *p);
	printf("a = %d\n", a);
	
	*(  fun()  ) = 111;
	printf("a = %d\n", a);
	


	return 0;
}