#include <stdio.h>


void swap(int m, int n)
{
	int tmp;
	tmp = m;
	m = n;
	n = tmp;
	printf("m = %d, n = %d\n", m, n);
}

void swap2(int *i,int *j){

	int tmp;
	tmp = *i;
	//修改指针指向的值
	*i = *j;
	*j = tmp;

}

int main(int argc, char *argv[])
{
	int a = 11;
	int b = 22;

	//值传递，不管这个变量什么类型，只要是变量本身传递，就是值传递
	//swap(a, b); 
	swap2(&a, &b); //地址传递，变量的地址
	printf("a = %d, b = %d\n", a, b);
	


	return 0;
}