#include <stdio.h>

int main()
{
	//移动5个人，课程分别是语、数、外
	//求小组语数外的平均值
	int a[5][3] = {
		{30,60,80},
		{60,60,60},
		{77,88,99},
		{88,66,77},
		{12,22,8}
	};
	
	int i = 0;
	int j = 0;

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			// printf("%d\n",a[j][i]);
			sum = sum + a[j][i];
		}
		printf("%d\n",sum/5);
	}

	
	return 0;
}
