#include <stdio.h>
//引入自定义头文件
#include "test.h"


int main(){

    //使用前声明
    extern int a;
    extern void fun7();

    //调用
    fun7();

    // gcc main.c test.h test.c 编译
    return 0;
}