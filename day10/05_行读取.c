#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    FILE * fp = fopen("05.txt","r");

    //C 库函数 void *malloc(size_t size) 分配所需的内存空间，并返回一个指向它的指针。
    char * p = (char *)malloc(sizeof(char) * 100);

    //独文件结尾就会返回0
    while (!feof(fp))
    {
        //C 库函数 void *memset(void *str, int c, size_t n) 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
        memset(p,0,100);

        //C 库函数 char *fgets(char *str, int n, FILE *stream) 从指定的流 stream 读取一行，并把它存储在 str 所指向的字符串内。
        //当读取 (n-1) 个字符时，或者读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。
        fgets(p,100,fp);
        printf("%s",p);
    }
    
    free(p);
    fclose(fp);
    return 0;
}