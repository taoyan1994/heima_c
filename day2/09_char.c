#include <stdio.h>

int main(){

	//1、内存中没有字符，只有数字
	//2、一个数字，对应的一个字符，这种规则就是ascii
	//3、使用字符或数字给字符变量赋值是等级
	//4、字符类型本质上就是1个字节大小的整型


    //字符： '一个字符'
    char ch = 'a';
    printf("ch的字符形式 = %c,ch的数字形式 = %d\n",ch,ch);

	ch = 97; //以ascii赋值， 和 ch = 'a'等价的
	printf("ch2 = %c\n", ch);

    //小写字母比大写字节大32，26个字母+6个符号，大写字母再表的前面，数字编码小
	char a = 'A';
	char b = 'a';
	printf("A = %d, a = %d\n", a, b);

    //小写转大写，-32
    printf("%c = a - 32\n",'a' - 32);

    //大写转小写，+32
    printf("%c = A + 32\n",'A' + 32);


    //输入字符串
    char tmp;
    scanf("%c",&tmp);
    printf("tmp = %c\n",tmp);
    return 0;
}