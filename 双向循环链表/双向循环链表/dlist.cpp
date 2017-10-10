// stdafx.cpp : 只包括标准包含文件的源文件
// $safeprojectname$.pch 将作为预编译标头
// stdafx.obj 将包含预编译类型信息

#include "dlist.h"

// TODO: 在 STDAFX.H 中引用任何所需的附加头文件，
//而不是在此文件中引用

//函数定义体
//创建链表表头
DBELIST createList() {
	DBELIST dlist = (DBELIST)malloc(sizeof(DBLIST));
	if (dlist == nullptr) {
		printf("分配内存空间失败\n");
		return nullptr;
	}
	dlist->front = dlist->rear = dlist;
	dlist->data = 0;
	return dlist;
};
//判断链表是否为空
int isEmptyList(DBELIST dlist) {
	if (dlist->rear == dlist) {
		return 0;
	}
	return 1;

};

//创建节点
DBELIST createNode(int data) {
	DBELIST newNode = (DBELIST)malloc(sizeof());

};

//添加节点

void addList(DBELIST list, int data) {



};
