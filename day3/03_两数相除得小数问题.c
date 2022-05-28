#include <stdio.h>


int main()
{
	int a = 5;
    int b = 2;
    double c;

    c = a / b;
    printf("c1 = %lf\n",c);//2.000000
    c = 1 / 2;
    printf("c2 = %lf\n",c);//0.000000


    //两个数相除，要想得到小数，分子分母必须有一个是小数，否则结果只会取整
    c = 1.0 / 2;
    printf("c3 = %lf\n",c);//0.500000

    c = 1 / 2.0;
    printf("c4 = %lf\n",c);//0.500000

        c = a * 1.0 / 2;
    printf("c4 = %lf\n",c);//2.500000


	return 0;
}


