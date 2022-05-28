#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[] = {10, -1, 20, 3, 5, 90, 2, 1, 9, 8, 7, 6};
	int n = sizeof(a)/sizeof(a[0]);
	
	//1.假定第一个元素是最大值
	int max = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	


	printf("数组的最大值为：%d\n", max);



	return 0;
}


