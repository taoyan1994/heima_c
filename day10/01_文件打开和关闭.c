#include <stdio.h>

int main(){

    FILE * fp = fopen("./1.txt","r");
    if (fp == NULL)
    {
        printf("打开文件失败\n");
        return -1;
    }
    printf("文件打开成功 fp = %p\n",fp);

    return 0;
}