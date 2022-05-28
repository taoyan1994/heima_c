/* ************************************************************************
 *       Filename:  15_指针指向栈区空间.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年10月28日 16时46分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>


int main(int argc, char *argv[])
{

	int *p;
	int a; //定义一个栈区变量
	p = &a; //指针指向栈区空间

	*p = 10;
	printf("*p = %d\n", *p);

	return 0;
}


