#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//结构体在函数外
struct student
{
	char name[20];
	int age;
	char sex[10];
	int socre;
	struct student *next;
};

int main(void){

	//初始化结构体
	struct student stu1 = { "小明", 24, "男", 98 ,nullptr};
	
	struct  student stu2 = { "小hua", 22, "女", 98 ,nullptr};
	struct  student stu3 = { "小lv", 23, "男", 98 ,nullptr};
	struct  student stu4 = { "小qiqi", 24, "女", 98 ,nullptr};
	stu1.next = &stu2;
	stu2.next = &stu3;
	stu3.next = &stu4;
	struct student *p = &stu1;

	while (p != nullptr){
		printf("姓名 ：%s\n",p->name);
		printf("年龄:%d\n", p->age);
		printf("性别:%s\n", p->sex);
		printf("分数：%d\n\n\n", p->socre);
		p = p->next;
	}
	
	system("pause");

}

