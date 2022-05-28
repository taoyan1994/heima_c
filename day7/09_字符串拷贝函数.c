/* ************************************************************************
 *       Filename:  09_字符串拷贝函数.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年10月25日 15时18分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>

//void my_strcpy(char dst[], char src[])
void my_strcpy(char *dst, char *src)
{
	int i = 0;
	while( *(src+i) != '\0')
	{
		*(dst+i) = *(src+i);
		i++;
	}
	//结束符
	*(dst+i) = 0;
}

int main(int argc, char *argv[])
{
	char src[] = "hello mike";
	char dst[100];
	char *p = dst;

	my_strcpy(p, src); //自定义拷贝函数
	printf("dst = %s\n", dst);


	return 0;
}


