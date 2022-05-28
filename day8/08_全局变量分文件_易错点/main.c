#include <stdio.h>
//引入自定义头文件
#include "a.h"

int main(){



    // gcc main.c a.h b.h 编译
    //error: #include nested too deeply
    extern int b;
    printf("b = %d\n",b);

    return 0;
}