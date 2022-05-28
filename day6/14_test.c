#include <stdio.h>


int main(int argc, char *argv[])
{
	int a = 10;
	//变量的值、变量的取地址不是同一个数
	printf("a = %d, &a = %p\n", a, &a);

	return 0;
}