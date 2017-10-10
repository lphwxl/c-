#include "targetver.h"
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <tchar.h>
typedef struct arraylist {

	int *alist;   //数据区

	int top;  //栈头部
}ARRLIST,*ALIST;

//判断栈是否为空
int isEmptyAList(ALIST zlist);

//初始化栈
void initAList(ALIST zlist);
//添加数据

int push(ALIST zlist, int data);
//获取顶部的数据
int getTopData(ALIST zlist);

//删除数据
int pop(ALIST zlist);


// TODO: 在此处引用程序需要的其他头文件

