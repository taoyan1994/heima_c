#include <stdio.h>


int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	//1、do while第一次无条件执行
	//2、第二次开始，和while一样
	do
	{
		printf("举起手来，我说三遍!\n");
		sum += i;
		i++;
	} while (i <= 3);
	
	return 0;
}


