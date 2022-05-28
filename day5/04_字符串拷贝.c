#include <stdio.h>
#include <string.h>

// int main(){

// 	//源字符串
// 	char str[100] = "Hello World";
// 	//目的
// 	char dst[100];

// 	//功能：把src字符数组的内容拷贝给dst所代表的数组
// 	strcpy(dst,str);
// 	printf("dst = %s\n", dst);

// 	char src2[100] = "hello\0 mike"; //源字符串
// 	char dst2[100]; //目的
// 	//功能：把src2字符数组的内容拷贝给dst所代表的数组
// 	//拷贝原理，从首元素开始，遇到结束符'\0'结束
// 	strcpy(dst2, src2);
// 	printf("dst = %s\n", dst2);
	
// 	return 0;
// }

// int main(){

// 	char src[100] = "hello mike"; //源字符串
// 	char dst[100] = "aaaaaaaaaaaaaaaaaaaaaaa"; //目的
	
// 	//功能：把src字符数组前n个字符的内容拷贝给dst所代表的数组
// 	//strncpy(dst, src, strlen(src)+1);
// 	strncpy(dst,src,5);

// 	printf("dst = %s\n", dst);
// 	return 0;
// }

int main(){

	char src[] = "hello\0 mike"; //源字符串
	char dst[100];//目的
	
	//功能：把src字符数组前n个字符的内容拷贝给dst所代表的数组
	//可以把'\0'拷贝过去，但是'\0'后面的内容无法拷贝
	strncpy(dst, src, sizeof(src));
	
	printf("dst = %s\n", dst);
	printf("dst = %s\n", dst+strlen("hello")+1);
	
	return 0;
}