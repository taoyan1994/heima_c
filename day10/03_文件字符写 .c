#include <stdio.h>
#include <string.h>

int main(){

    FILE * fp = fopen("2.txt","w");
    if (!fp)
    {
        printf("文件打开失败\n");
        return -1;
    }

    char str[] = "Hello World!";
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        int ch = fputc(str[i],fp);
        printf("%c",ch);
    }
    

    return 0;
}