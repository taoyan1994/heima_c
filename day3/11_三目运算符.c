#include <stdio.h>


int main(int argc, char *argv[])
{
	//三目运算符，就是简洁版的if else
	int a = 10;
	int b = 20;
	int c;
	if(a > b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	printf("最大值为： %d\n", c);
	
	
	a = 10;
	b = 20;
	//1、?:(三目运算符)优先级比=高
	//2、判断a>b条件，如果为真，执行？：之间的语句
	//                如果为假，执行：；之间的语句
	c = a > b?a : b;
	printf("2最大值为: %d\n", c);

	return 0;
}


