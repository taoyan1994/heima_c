#include <stdio.h>

void fun1(){
	static int a = 10;//声明静态变量的这行代码，只在编译时候执行一次

	a++;//可以多次赋值
	printf("a = %d\n",a);
}
int main(){

	fun1();	//11
	fun1();	//12
	fun1();	//13
	fun1();	//14

	return 0;
}