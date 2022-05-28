#include <stdio.h>

int main(){

    //打开原文件
    FILE * fp1 = fopen("原文件.txt","r");
    FILE * fp2 = fopen("加密文件.txt","w");
    
    char ch;
    while ((ch = fgetc(fp1)) != EOF)
    {
        // printf("%c",ch);
        //加密，方式为 阿斯克码 +1
        ch++;
        
        //写入加密文件
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}