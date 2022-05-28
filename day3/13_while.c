#include <stdio.h>


int main(int argc, char *argv[])
{
	int num = 1;

	//1、判断num>0的条件，如果为真，执行{}语句
	//                    如果为假，跳出while()循环
	//2、执行完{}语句，重复1步骤
	while(num > 0) //这里没有分号
	{
		printf("请输入一个数(负数退出循环)：");
		scanf("%d", &num);

	}//这里也没有分号

	return 0;
}


