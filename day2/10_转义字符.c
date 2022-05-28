#include <stdio.h>

int main(){

	//换行
	char ch = '\n'; //换行符
	printf("ffff%c", ch);

    //光标回到句首
	ch = '\r'; //光标切换到句首
	printf("abcddd%cefg\n", ch);

    //退格
    ch = '\b'; //退格
	printf("12%c3456\n", ch);

    return 0;
}