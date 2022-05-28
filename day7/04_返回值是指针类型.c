/* ************************************************************************
 *       Filename:  04_返回值是指针类型.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年10月25日 11时23分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>

int* fun()
{
	int a = 10;
// printf("%p\n", &a);
	return &a; 
}

int main(int argc, char *argv[])
{
	int *p = NULL;
	
	p = fun();//接收函数返回的地址
	printf("%p\n", p);
	*p = 100; //操作指针所指向的内存

	return 0;
}

