#include <stdio.h>


enum TYPE{
	run,attack,skill,dance,showUI,frozen=20,dizz,dath,moti=30
											//21	
};


int main(int argc, char *argv[])
{
	int value;
	
	while (1)
	{
		scanf("%d",&value);
		switch (value)
		{
		case run:
			printf("英雄移动中---\n");
			break;
		case attack:
			printf("英雄攻击中---\n");
			break;
		case skill:
			printf("英雄释放技能中---\n");
			break;
		case dance:
			printf("英雄跳舞中---\n");
			break;
		case showUI:
			printf("英雄亮徽标中---\n");
			break;
		case frozen:
			printf("英雄冰冻中---\n");
			break;
		case dizz:
			printf("英雄被眩晕中---\n");
			break;
		case dath:
			printf("英雄死亡---\n");
			break;
		case moti:
			printf("英雄等待中---\n");
			break;
		default:
			break;
		}
	
	}
	
	
	return 0;
}
