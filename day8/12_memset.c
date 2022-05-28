
#include <stdio.h>
#include <string.h>

int main()
{
	int b[10] = {0};
	
	//处理一些代码，把b内部的元素改了
	
	
	//b[10] = {0}; //err
	int i = 0;
	int n = sizeof(b)/sizeof(b[0]);
	for(i = 0; i < n; i++)
	{
		b[i] = 0;
	}
	
	memset(b, 0, sizeof(b) );
	
	
	char str[10];
	memset(str, 'a', sizeof(str) );
	for(i = 0; i < 10; i++)
	{
		printf("%c, ", str[i]);
	}
	printf("\n");
	
	
	return 0;
}


// int main(int argc, char *argv[])
// {
//    char str[50];
 
//    strcpy(str,"This is string.h library function");
//    puts(str);
 
//    memset(str,'$',7);
//    puts(str);
   
//    return(0);
// }