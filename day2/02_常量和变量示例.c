#include <stdio.h>
//1、#开头的语句是预处理语句，无需分号结束
//2、定义一个宏定义的标示符MAX， 它代表100， MAX它是常量
//3、宏定义以后的代码都可以使用MAX
//4、在后面出现的MAX，预处理都会替换为100

#define MAX 100

int main(){

    printf("MAX = %d\n",MAX);
    // MAX = 1; //MAX它是常量， 不允许修改:error: lvalue required as left operand of assignment

    int b = MAX;

    //const是一个关键字，作用是修饰一个变量为只读
    const int c = 25;
    // c = 60;//c只读，不允许修改  error: assignment of read-only variable ‘c’

	int d;
	d = 100; //ok, 变量可以修改
    
    return 0;
}