#include <stdio.h>


int main(int argc, char *argv[])
{
	//如果定义一个合适类型的变量保存另一个变量的地址
	//在需要保存变量地址的类型基础上加一个*
	int a = 10;
	int *p = &a;
	int **q = &p;
	int ***t = &q;
	int ****m = &t;

	*m;
	**m;
	***m;
	****m;
	*t;
	**t;
	***t;



	return 0;
}


