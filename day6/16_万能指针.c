#include <stdio.h>


int main(int argc, char *argv[])
{
	//1.定义一个哇能指针可以接受任意类型的指针
	void * p = NULL;

	//2.定义一个变量
	char a = 'H';

	//3.将p指向a的地址
	p = &a;

	//4.取值的时候必须需要指针的数据类型
	*(char *)p = 'h';
	

	printf("*p = %c\n",*(char*)p);
	
	return 0;
}