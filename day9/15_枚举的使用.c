#include <stdio.h>

//enum是关键字
//里面的成员是一个标示符，枚举常量
//第一个成员如果没有赋值，默认为0， 下一个成员比上一个多1
//枚举类型 enum Color
//成员：枚举成员，枚举常量
enum Color{
	pink,red,green,white,blue,yellow
	//第一个默认为 0，后面的一次+1
};


int main(int argc, char *argv[])
{
	enum Color my_color;
	int value;
	scanf("%d",&value);

	switch (value)
	{
	case pink:
		printf("粉色\n");
		break;
	case red:
		printf("红色\n");
		break;
	case green:
		printf("绿色\n");
		break;
	case white:
		printf("白色\n");
		break;
	case blue:
		printf("蓝色\n");
		break;
	case yellow:
		printf("黄色\n");
		break;	
	default:
		break;
	}

	return 0;
}
