#include <stdio.h>

int main(){

    FILE * fp = fopen("1.txt","r");
    if (!fp)
    {
        printf("文件打开失败\n");
        return -1;
    }
    char ch;

    // ch = fgetc(fp);
    // printf("%c",ch);

    // ch = fgetc(fp);
    // printf("%c",ch);

    // ch = fgetc(fp);
    // printf("%c",ch);

    // ch = fgetc(fp);
    // printf("%c",ch);
    // printf("\n");

    //文件默认结尾 -1 ，宏为 EOF。因为ASCII码是0~127，不可能出现-1

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }

    printf("\n");
    return 0;
}