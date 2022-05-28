#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[5][10];
	
	//1、数组名是常量，不能修改
	//a = 10; //err
	
	//2、sizeof(数组名)，测数组的总大小：5 * int[10] = 5 * 4 * 10 = 200
	printf("sizeof(a) = %lu\n", sizeof(a));
	
	//3、sizeof(a[0]), 测的是第0个元素的大小： int [10] = 4 * 10 = 40
	printf("sizeof(a[0]) = %lu\n", sizeof(a[0]));
	
	//4、sizeof(a[0][0]), 测的是第0行第0列元素的大小，int = 4
	printf("sizeof(a[0][0]) = %lu\n", sizeof(a[0][0]));
	
	//5、求行数（元素个数）: 总大小/每个元素的大小
	int n = sizeof(a)/sizeof(a[0]);
	printf("n = %d\n", n);
	
	//6、求列数
	n = sizeof(a[0])/sizeof(int);
	printf("n1 = %d\n", n);
	
	//7、行*列总数
	n = sizeof(a)/sizeof(int);
	printf("n2 = %d\n", n);
	
	

	return 0;
}


