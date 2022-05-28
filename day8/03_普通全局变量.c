#include <stdio.h>

//定义全局变量，作用域为项目全部文件
int global;

//static 定义全局静态变量，作用域为本文件
static int global2;

void fun(){

	global = 20;//赋值
	printf("在fun中 global = %d\n",global);
}

int main(){

	global = 10;
	printf("在main中 global = %d\n",global);
	fun();
	printf("在main中 global = %d\n",global);
	return 0;
}