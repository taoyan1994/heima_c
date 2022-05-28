#include <stdio.h>

//整型的输入
// int main()
// {
// 	int a,b;
//     printf("请输入整数a,b:");
//     scanf("%d %d",&a,&b);
//     printf("a = %d,b = %d\n",a,b);
// 	return 0;
// }

//字符的输入
// int main(){
//     char ch;
// 	printf("请输入字符ch:");
// 	scanf("%c", &ch);
// 	printf("ch = '%c'\n", ch);

//     return 0;
// }

//字符的输入
int main(){
    char ch;
    printf("请输入字符ch:");
	ch = getchar(); //读取键盘的字符，放在a变量
    printf("ch = '%c'\n", ch);

	//吃掉上一步的\n，不做处理
	char b;
	//scanf("%c", &b);
	b = getchar();
    
    char c;
	printf("请输入字符c:");
	//scanf("%c", &c);
	c = getchar();
	printf("c = %c'\n", c);
    
    return 0;
}