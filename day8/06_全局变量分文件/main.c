#include <stdio.h>
//使用 gcc main.c test.c 编译
int main(){

    //使用函数前，声明函数
    //生命函数，extern可有可无
    //声明可以多次
    extern void test();

    //函数调用
    test();

    return 0;
}