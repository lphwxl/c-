// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
// TODO: 在此处引用程序需要的其他头文件
#include <stdlib.h>
#include <string.h>


//结构体
typedef struct dlist {

	int data;
	struct dlist * front;
	struct dlist * rear;

}DBLIST,*DBELIST;




//函数定义体
//创建链表表头
DBELIST createList();
//判断链表是否为空
int isEmptyList(DBELIST dlist);

//创建节点
DBELIST createNode(int data);

//添加节点

void addList(DBELIST list,int data);

