// 栈.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"








int main()
{
	int i;
	//用堆内存实现栈内存
	ALIST a = (ALIST)malloc(sizeof(ARRLIST));
	initAList(a);
	push(a,1);
	push(a,2);
	push(a,3);

	i = getTopData(a);
	printf("i=%d\n",i);
	pop(a);
	i = getTopData(a);
	printf("i=%d\n", i);
	pop(a);

	i = getTopData(a);
	printf("i=%d\n", i);
	pop(a);

	getTopData(a);
	getTopData(a);
	
	free(a);
	system("pause");
    return 0;
}

