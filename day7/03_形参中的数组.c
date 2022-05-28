#include <stdio.h>
//1、形参中的数组，不是数组，它是普通指针变量
//2、形参数组：int a[100000], int a[], int *a对编译器而已，没有任何区别，
//3、编译器都是当做int *处理
//4、形参中的数组和非形参数组区别：形参中的数组是指针变量，非形参数组就是数组

void print_array2(int a[100000], int n){
	int i = 0;
	for(i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

int main(){

	int a[] = {1, -2, 3, -4, 5, -6, 7, -8, 9};
	int i = 0;
	int j = 0;
	int tmp = 0;
	int n = sizeof(a)/sizeof(*a);

	print_array2(a,n);

	

	return 0;
}



// int main(int argc, char *argv[])
// {
// 	int a[] = {1, -2, 3, -4, 5, -6, 7, -8, 9};
// 	int i = 0;
// 	int j = 0;
// 	int tmp = 0;
// 	int n = sizeof(a)/sizeof(*a);

// 	for (int i = 0; i < n-1; i++)
// 	{
// 		for (int j = 0; j < n-1-i; j++)
// 		{
// 			if (a[j] > a[j+1])
// 			{
// 				tmp = a[j];
// 				a[j] = a[j+i];
// 				a[j+1] = a[j];

// 			}
// 		}
		
// 	}
	
	
// 	printf("排序后\n");
// 	for(i = 0; i < n; i++)
// 	{
// 		printf("%d, ", a[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }