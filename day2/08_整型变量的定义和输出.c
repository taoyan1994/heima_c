#include <stdio.h>

int main(){

    //int占4字节
    int a;
    printf("请输入整数a:");
    scanf("%d",&a);
    printf("a = %d\n", a);

    //short占2字节
    short b;
    printf("请输入整数b:");
    //%hd代表是短整型
    scanf("%hd",&b);
    printf("b = %hd\n", b);


    //long long 占8字节
    long long c;
    printf("请输入整数c:");
    scanf("%lld",&c);
    printf("c = %lld\n", c);


    return 0;
}