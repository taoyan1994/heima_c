#include <stdio.h>

int main(int argc, char *argv[])
{

	//1、typedef给一个以存在的类型起一个别名
	//2、typedef不能创建新类型
	
	//给int起一个别名叫my_int
	typedef int my_int; //有分号
	
	my_int a; //my_int a; //宏定义发生在预处理
					  //typedef是在编译阶段
	a = 10;
	printf("%d\n",a);

	return 0;
}


