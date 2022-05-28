#include <stdio.h>

int main()
{
	char buf[100];
	
	//从stdin(代表标准输入，键盘)，读取内容
	//如果输入内容如果大于sizeof(buf) - 1， 只取sizeof(buf) - 1，放在buf所在的数组
	//会把换行符也读进去(注意)
	fgets(buf,sizeof(buf),stdin);
	
	return 0;
}

// int main02()
// {
// 	char buf[100];
	
// 	//gets()从键盘读取字符串，放在指定的数组
// 	//gets()允许有空格，不做越界检查，此函数不安全
// 	gets(buf);
// 	printf("buf = %s\n", buf);
	
// 	return 0;
// }

// //1、scanf的使用
// int main01(int argc, char *argv[])
// {
// 	char buf[100] = {0};
// 	printf("请输入字符串buf："); 
// 	scanf("%s", buf); //不需要&， 默认以空格分开
// 	printf("buf = %s\n", buf);
	
// 	char tmp[100] = {0};
// 	printf("请输入字符串tmp："); 
// 	scanf("%s", tmp); //不需要&， 默认以空格分开
// 	printf("tmp = %s\n", tmp);
	
// 	//scanf()的缺陷，不做越界检查，此函数不安全
// 	char str[10];
// 	printf("请输入字符串str："); 
// 	scanf("%s", str); //不需要&， 默认以空格分开
// 	printf("str = %s\n", str);
	
	
// 	return 0;
// }