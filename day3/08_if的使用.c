#include <stdio.h>


int main(int argc, char *argv[])
{
	//1、if是一个关键字，if后面有(), if()后面是没有分号
	//2、()里写的是条件，条件为真，执行if语句，为假不执行
	//if(1) //条件为真
	//if(-1)//条件为真
	//if(0) //条件为假	
	if(4 > 3)//条件为真
	{
		printf("满足条件\n");
	}
	
	
	//3、if()后面最好加{}，{}代表if语句
	//4、if()后面如果不加{}，只有第一个语句属于if
	if(1)
		printf("测试11111111111\n");
		printf("测试22222222222\n"); //此语句不属于if	
	
	//5、if()后面是没有分号，切记
	
	return 0;
}


