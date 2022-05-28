#include <stdio.h>
#include <string.h>
//定义一个结构体类型
struct Student
{
    char name[20];
    int number;
    int score;
};

int main(){

    //定义结构体变量
    //1. 类型名 变量名
    struct Student st1;

    //1.结构体变量初始化，和数组一样，要使用大括号
    //2、只有在定义是才能初始化
    struct Student st2 = {"Tom",9526,61};

    //使用结构体成员，不能直接使用，需要借助结构体变量来引用
    struct Student tmp;

    // tmp.name = "Bob";//name成员是数组名，数组名是常量，不能修改
    strcpy(tmp.name,"Bob");
    tmp.number = 9527;
    tmp.score = 59;
    printf("tmp的学号 = %d\n",tmp.number);



    //如果是指针变量，使用->
	//如果是指针，指针有合法指向，才能操作结构体成员
	struct Student *p;
	p = &tmp;
	p->age = 18;
	strcpy(p->name, "mike");
	p->score = 59;
	
	//任何结构体变量都可用 .  或 -> 操作成员
	(&tmp)->age = 18;
	
	//.优先级高，所以加()
	(*p).age = 18;
	
	p[0].age = 18;
	
	
	int age;
	int score;
	age = 18;
	
    return 0;
}