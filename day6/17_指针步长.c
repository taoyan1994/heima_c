#include <stdio.h>


int main(int argc, char *argv[])
{
	//1、指针的加法，不是传统的加法
	//2、步长由指针指向的数据类型决定
	int a;
	int *p = &a;

	printf("p：%p, p+1: %p\n", p, p+1);

	char b;
	char *q = &b;
	printf("q：%p, q+1: %p\n", q, q+1);


	return 0;
}