#include <stdio.h>
#include <string.h>

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int b[10];
	
	//第3个参数是指拷贝内存的总大小
	memcpy(b, a, 10 * sizeof(int) );
	memcpy(b, a, sizeof(a) );
	
	//使用memcpy()最好别出现内存重叠
	//如果出现内存重叠，最好使用memmove
	//memcpy(&a[2], a, 5*sizeof(int) ); //err
	memmove(&a[2], a, 5*sizeof(int) );
	
	return 0;
}


int main01(int argc, char *argv[])
{
	char p[] = "hello\0mike"; //以字符串初始化，自动默认隐藏一个结束符'\0';
	char buf[100];
	printf("sizeof(p) = %lu\n", sizeof(p));
	strncpy(buf, p, sizeof(p));
	printf("buf1 = %s\n", buf);
	printf("buf2 = %s\n", buf + strlen("hello") + 1);
	
	memset(buf, 0, sizeof(buf) );
	memcpy(buf, p, sizeof(p));
	printf("buf3 = %s\n", buf);
	printf("buf4 = %s\n", buf + strlen("hello") + 1);


	return 0;
}


