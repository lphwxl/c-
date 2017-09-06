#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(){

	char username[20] = "";
	char password[20] = "";
	int i = 0;
	char tmp;
	printf("请输入用户名:\n");
	scanf("%s", username);
	fflush(stdin);
	printf("请输入密码：\n");
	tmp = _getch();
	while (tmp != '0'){
		password[i] = tmp;
		i++;
		tmp = _getch();
		printf("*");
	}
	if ((strcmp("莫帅", username)) == 0 && (strcmp("123456",password) == 0)){
		printf("恭喜你登录成功");
	}
	else{
		printf("用户名或密码错误！！！");
	}
	system("pause");
	system("pause");
	system("pause");
	system("pause");
	getchar();
	getchar();
	getchar();
	getchar();

}