#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�ṹ���ں�����
struct student
{
	char name[20];
	int age;
	char sex[10];
	int socre;
	struct student *next;
};

int main(void){

	//��ʼ���ṹ��
	struct student stu1 = { "С��", 24, "��", 98 ,nullptr};
	
	struct  student stu2 = { "Сhua", 22, "Ů", 98 ,nullptr};
	struct  student stu3 = { "Сlv", 23, "��", 98 ,nullptr};
	struct  student stu4 = { "Сqiqi", 24, "Ů", 98 ,nullptr};
	stu1.next = &stu2;
	stu2.next = &stu3;
	stu3.next = &stu4;
	struct student *p = &stu1;

	while (p != nullptr){
		printf("���� ��%s\n",p->name);
		printf("����:%d\n", p->age);
		printf("�Ա�:%s\n", p->sex);
		printf("������%d\n\n\n", p->socre);
		p = p->next;
	}
	
	system("pause");

}

