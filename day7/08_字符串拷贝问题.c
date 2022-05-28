#include <stdio.h>
#include <string.h>

int main()
{
	char buf[100];
	char *p = buf;
	//1、p指向buf的首元素
	//2、strcpy()是给p所指向的内存拷贝内容，字符串拷贝给了buf
	strcpy(p, "hello mike abc");
	
	printf("p = %s, buf = %s\n", p, buf);
	
	return 0;
}

int main01(int argc, char *argv[])
{
	char *p;
	//1、不是给p变量拷贝内容
	//2、给p所指向的内存拷贝内容
	//3、p是野指针，给野指针所指向的内存拷贝内容，结果导致段错误
	strcpy(p, "hello mike abc");
	
	
	
	
	
	return 0;
}


