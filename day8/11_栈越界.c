#include <stdio.h>
#include <stdlib.h>
int main(){

    // int a[100000000] = {0};//段错误 (核心已转储) 栈空间不足以存储这个数据

    //开辟堆空间 malloc 函数
    int* p = malloc(100000000 * sizeof(int));
    if (p == NULL)
    {
        printf("%p = \n",p);
        printf("分配失败\n");
    }

    //使用堆空间
    for (int i = 0; i < 10; i++)
    {
        p[i] = i;
    }

    //读取
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",*(p+i));
    }
    
    //释放堆空间
    free(p);

    //留下了野指针，处理一下
    p = NULL;
    printf("%p\n",p);


    return 0;
}