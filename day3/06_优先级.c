#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
	短路规则（优化）
	||, 左边为真，右边不执行
	&&，左边为假，右边不执行
	*/

    int c = 0;
    printf("before c = %d\n",c);
    0 || (c = 250);
    printf("after c = %d\n",c);

    0 && (c = 350);
    printf("after c = %d\n",c);
    return 0;
}
