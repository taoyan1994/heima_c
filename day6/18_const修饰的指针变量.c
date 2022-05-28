#include <stdio.h>


int main(int argc, char *argv[])
{
	//指针修改变量
	int a = 10;
	int *p1 = &a;
	//可以通过指针来 修改 内存的值
	*p1 = 200;
	printf("a = %d\n",a);
	printf("p1 = %p\n",p1);
	p1 = NULL;
	printf("a = %d\n",a);
	printf("p1 = %p\n",p1);


	//指针修改常量
	const int z = 50;
	// z = 60;//不可以修改常量
	// int * ipz = &z;
	// *ipz = 70;//不可以修改常量






	/*******************一、const修饰指针类型[const int*]，只可以通过指针来 读 内存的值*************/
	int x = 4;
	int b = 5;
	printf("b = %d\n",b);

	const int * p2 = &x;//p2先指向x的地址
	printf("*p2 = %d\n",*p2);

	p2 = &b;//p2先指向x的地址
	printf("*p2 = %d\n",*p2);
	//***p2可以修改保存了谁的地址

	//但是不可以修改保存的地址所存储的值
	//企图修改指针存储地址的值 20
	// *p2 = 30;//报错：assignment of read-only location ‘*p2’


	/*******************二、const修饰指针变量p3，不可以修改p3保存了谁的地址，只能赋值一次*************/
	int i = 10;
	int j = 20;
	int * const p3 = &i;
	// p3 = &j;//报错，不可以修改p3了
	
	//p3只能一直指向i了，但是i可以修改
	*p3 = 11;
	printf("i = %d\n",i);

	/*******************三、const修饰指针类型int *,又修改指针变量p3，完了谁都不能改了*************/
	int tmp = 600;
	const int * const p4 = &tmp;
	// *p4 = 500;
	// p4 = &i
	//都不行


	return 0;
}