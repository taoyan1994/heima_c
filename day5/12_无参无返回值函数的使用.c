/* ************************************************************************
 *       Filename:  12_无参无返回值函数的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年10月22日 16时43分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>

//无参无返回值函数的定义
//1、没有返回值，用void关键字修饰
//2、没有参数，也可用void，或者空
//3、第一个void代表返回值，fun代表函数名字，()内部代表参数，空就是无参，{}就是函数体
//4、同一个文件不能出现同名函数
//5、不同的函数，内部的变量是没有关系2
void fun(void) //等价于 void fun()
{
	printf("我是无参无返回值函数的定义\n");
	
	//函数内部，包含()内部的变量，只有在调用时分配空间，调用完毕自动释放
	int a = 10;
	int b = 20;
	printf("a + b = %d\n", a+b);
	
}



int main(int argc, char *argv[])
{
	//1、除了main()，其他函数只有调用了才起作用
	//2、函数的调用不可能出现void关键字
		//void fun(); //err
	//3、无参无返回值函数的调用格式：函数名字()
		//fun(void); //err
		fun();
	
	//main函数的a、b和fun()a、b没有关系
	int a = 10;
	int b = 10;
	
	
	return 0;
}


