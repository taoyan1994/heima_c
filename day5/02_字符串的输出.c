#include <stdio.h>

int main()
{
	char buf[] = "hello";
	
	//往stdout(代表屏幕，标准输出)输出buf的内容
	fputs(buf, stdout);
	
	return 0;
}


// int main(int argc, char *argv[])
// {
// 	char buf[] = "hello";

// 	puts(buf); //把buf内容输出到屏幕，自动在屏幕加换行，是在屏幕加，字符串本身没有变量
// 	printf("%s", buf); //没有加换行符	

// 	return 0;
// }