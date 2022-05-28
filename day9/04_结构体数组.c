#include <stdio.h>
#include <string.h>

struct Student
{
	int age;
	char name[50];
	int score;
};


int main(){

	//定义一个结构体组数组
	struct Student a1[5] = 
	{
		18,"Bob",99,
		18,"Lili",98,
		19,"Ton",94,
		20,"Hellen",95,
		18,"LiLei",94
	};

	struct Student a2[5] ={ 18, "mike", 59, 22, "jiang", 66, 33, "xiaobai", 87, 28, "lily", 77, 30, "lucy", 68};

	struct Student a[5] =
	{
		{18, "mike", 59},
		{22, "jiang", 66},
		{33, "xiaobai", 87},
		{28, "lily", 77},
		{30, "lucy", 68}
	};

	//我们使用a,求平均分
	int i = 0;
	int n = sizeof(a)/sizeof(a[0]);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i].score;
	}
	printf("平局分： %lf\n", (double)sum/n);
	return 0;
}