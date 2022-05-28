#include <stdio.h>


int main(int argc, char *argv[])
{
	int num;
	printf("请输入num:");
	scanf("%d", &num);

	//1、switch是关键字，switch()后面没有分号
	//2、switch()中()里只能放整型变量或字符型变量
	//3、switch用法类似于电梯模型
	switch (num)
	{
	case 1:
		printf("您输入的是1楼\n");
		break;
	case 2:
		printf("您输入的是2楼\n");
		break;	
	default:
		printf("您输入的是其他楼\n");
		break;
	}


	return 0;
}


