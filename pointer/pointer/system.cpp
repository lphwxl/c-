#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alert(){


	char *cp = nullptr;
	char carr[] = { 'd', 'c','q' };
	cp = carr;
	char **p = &cp;

	printf("第一个字符是:%c",**p);

	system("pause");
	return 0;

}