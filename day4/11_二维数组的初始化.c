#include <stdio.h>


int main(int argc, char *argv[])
{
	//看方便，写不方便
	int a[3][4] = 
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};

	int a1[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	//如果定义时，同时初始化，第1个[]可以不写内容
	int a2[][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	//如果第1个[]不写， 必须初始化
	//int a3[][4]; //err
	
	int a3[3][4] = {0, 1, 2, 3}; //没有初始化的元素赋值为0
	int a4[3][4] = {0}; //所有元素初始化为0



	return 0;
}


