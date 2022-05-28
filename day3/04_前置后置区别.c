#include <stdio.h>

int main()
{
    int a = 1;
	int b = 0;

    //后置++, 先赋值 后自增
    b = a++;
    printf("b = %d  a = %d\n",b,a);

    //前置++，先自增 后赋值
    b = ++a;
    printf("b = %d  a = %d\n",b,a);

    return 0;
}
