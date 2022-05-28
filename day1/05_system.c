#include <stdio.h>
#include <stdlib.h>

int main(){
    // system函数的使用
    //在已经运行的程序中执行另外一个外部程序
    printf("调用外部应用 waibu.c\n");
    int res;
    res = system("./waibu.out");
    printf("调用外部应用 waibu.c的返回结果 = %d\n",res);
    return 0;
}