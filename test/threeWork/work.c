#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(){

	char username[20] = "";
	char password[20] = "";
	int i = 0;
	char tmp;
	printf("�������û���:\n");
	scanf("%s", username);
	fflush(stdin);
	printf("���������룺\n");
	tmp = _getch();
	while (tmp != '0'){
		password[i] = tmp;
		i++;
		tmp = _getch();
		printf("*");
	}
	if ((strcmp("Ī˧", username)) == 0 && (strcmp("123456",password) == 0)){
		printf("��ϲ���¼�ɹ�");
	}
	else{
		printf("�û�����������󣡣���");
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