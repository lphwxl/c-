#include <stdio.h>

#include <stdlib.h>
#include <string.h>


int main(){

	char *cp = nullptr;
	char carr[] = { 'd', 'c', 'q' };
	cp = carr;
	char **p = &cp;

	printf("��һ���ַ���:%c", **p);

	system("pause");
	return 0;

	//����int * ���͵�ָ�룬���int��������
	//int *p = nullptr;

	//int a = 12;

	//p = &a;

	//printf("p = %0x\n",&a);
	//printf("*p = %d\n",*p);

	//system("pause");


	//return 0;
}