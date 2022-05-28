#include <stdio.h>


int main(int argc, char *argv[])
{
	char ip[10] = "127.0.0.1";
	int port = 3306;
	char user[10] = "root";
	char password[50] = "MyNewPass";

	//生成这类的字符串 mysql -h 182.167.12.3 -u user1 -p -P 3308

	char command[100];
	sprintf(command,"mysql -h %s -u %s -p %d",ip,user,port);


	
	printf("%s\n", command);

	return 0;
}


