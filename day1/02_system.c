#include <stdio.h>
#include <stdlib.h>

int main(){
    // system函数的使用
    //在已经运行的程序中执行另外一个外部程序
    printf("调用系统应用 ls\n");
    system("ls /");
    system("sudo reboot");
    return 0;
}