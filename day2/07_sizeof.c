#include <stdio.h>

int main(){

    //数据类型的作用：告诉编译器，定义此类型变量需要分配多大空间
    //sizeof 是运算符,计算空间大小 单位是byte

    printf("sizeof(int) = %lu\n",sizeof(int));
    printf("sizeof(float) = %lu\n",sizeof(float));
    printf("sizeof(double) = %lu\n",sizeof(double));
    printf("sizeof(char) = %lu\n",sizeof(char));


    return 0;
}