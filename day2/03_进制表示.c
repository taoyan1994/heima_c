#include <stdio.h>

int main(){

    int a = 12;////以10进制方式赋值

    //%d，以10进制的方式打印
	printf("[10] a = %d\n", a);

    //%d，以8进制的方式打印
	printf("[8] a = %o\n", a);

    //%d，以10进制的方式打印
	printf("[16] a = %x\n", a);


    return 0;
}