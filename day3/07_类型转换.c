#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     double a;
//     int b = 10;

//     //隐式转换，编译器内容自动转换
//     a = b;
//     printf("a = %lf\n", a);
//     return 0;
// }


//强制类型转换： (类型)需要转换的变量名
int main(int argc, char const *argv[])
{
    double a = 3.14;
    int b;

    //隐式转换，编译器内容自动转换
    b = (int)a;
    printf("b = %d\n", b);
    return 0;
}
