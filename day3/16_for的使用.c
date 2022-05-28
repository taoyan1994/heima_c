#include <stdio.h>


int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;
	
	//for()内部有2个分号，这是语法
	/*
	1、i = 1
	2、判断 i <= 100 条件，如果条件为真，执行{}语句，如果条件为假，跳出for()
	3、执行{}语句，sum +=i;
	4、执行完{}语句后，执行++i
	5、重复 2、3、4步骤
	
	*/
	for(i = 1; i <= 100; ++i)
	{
		sum +=i;
	}
	printf("sum = %d\n", sum);
	

	return 0;
}


