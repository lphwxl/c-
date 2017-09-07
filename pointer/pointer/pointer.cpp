#include <stdio.h>

#include <stdlib.h>
#include <string.h>


int main(){

	char *cp = nullptr;
	char carr[] = { 'd', 'c', 'q' };
	cp = carr;
	char **p = &cp;

	printf("第一个字符是:%c", **p);

	system("pause");
	return 0;

	//定义int * 类型的指针，存放int类型数据
	//int *p = nullptr;

	//int a = 12;

	//p = &a;

	//printf("p = %0x\n",&a);
	//printf("*p = %d\n",*p);

	//system("pause");


	//return 0;
}