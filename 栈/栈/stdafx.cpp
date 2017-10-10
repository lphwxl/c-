#include "stdafx.h"
#define MI 10
// TODO: 在 STDAFX.H 中引用任何所需的附加头文件，
//而不是在此文件中引用


void initAList(ALIST zlist) {
	zlist->alist = (int *)malloc(sizeof(int)*MI);
	if (zlist == nullptr) {
		printf("分配内存失败");
		exit(0);
	}
	zlist->top = -1;
}

int isEmptyAList(ALIST zlist) {
	if (zlist->top == -1) {
		return 0;
	}
	return 1;
}


int push(ALIST zlist,int data) {
	if (zlist->top >= MI) {
		printf("栈内存已经分配满\n");
		return 0;
	}
	zlist->top++;
	zlist->alist[zlist->top] = data;
	return 1;
}


int getTopData(ALIST zlist) {
	if (zlist->top == -1) {
		printf("栈内存为空\n\n");
		return 0;
	}
	return zlist->alist[zlist->top];
	

}

int pop(ALIST zlist) {
	if (zlist->top == -1) {
		printf("栈内存已经空掉了！\n");
		return 0;
	}
	--zlist->top;
	zlist->alist[zlist->top];

}