/* ************************************************************************
 *       Filename:  07_字符串追加.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年10月22日 11时53分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	char src[] = " hello mike";
	char dst[100] = "abc";
	//把src的内容追加到dst的后面
	//strcat(dst, src); //dst = "abc  hello mike"
	
	strncat(dst, src, strlen(" hello")); //指定长度追加 dst = "abc  hello"
	
	//strcpy(dst, src);
	
	printf("dst = %s\n", dst);
	
	

	return 0;
}



