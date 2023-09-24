#define _CRT_SECURE_NO_WARNINGS 1


/*
	用户自己建立的数据类型：
		结构体：
			用户创建由不同类型数据组成的组合型的数据结构；
			又称记录record，表示一条数据记录，一条数据记录可以包括很多信息；

			声明结构体：结构体名一般首字母大写
				struct 结构体名
				{
					成员表列
				}；

			定义结构体类型变量：
				struct 结构体名 变量名；

			在声明类型的同时定义变量：
				struct 结构体名
				{
					成员表列
				} 变量名表列；


			结构体变量的初始化：
				方式1：初始化类似于数组形式  a = {}
				方式2：当只初始化部分成员时  a = {.element="xxxx"}

			结构体变量的引用：
				这里的引用一般表示结构体变量的成员的引用；
				使用.符号进行索引；

			结构体变量的运算：
				1、结构体变量的成员可以想普通变量一样进行各种运算；
				2、同类的结构体变量可以相互赋值； a = b
				3、可以引用结构体变量成员的地址： &a.c


		结构体数组：
			结构体一般作为一组有关联的数据容器；
			数组用于存放相同数据类型的容器，便于重复操作；

		结构体指针：
			指向结构体变量的指针；
			一个结构体变量的起始地址就是这个结构体变量的指针；
			该结构体指针既可以指向结构体变量，也可以指向结构体变量中的成员；

			结构体指针变量的定义和之前指针的定义并无什么差别：
				struct A * a

			结构体指针引用成员：->符号

			指向结构体数组的指针：
				和普通数组的指针无差别；
				只是多了结构体的成员引用方式->;


		用结构体变量和结构体变量的指针作函数参数：
			这里的使用方式和变量作为普通变量和普通变量的指针一样；



*/


#include <stdio.h>
#include <string.h>

struct Student
{
	long int num;
	char name[20];
	char sex;
	char addr[20];
};



void test01()
{
	struct Student a = { 10111, "hao", 'M', "123 road" };
	char* str_format = "NO.:%ld\nname:%s\nsex:%c\naddress:%s\n";


	printf(str_format, a.num, a.name, a.sex, a.addr);
}

struct Person
{
	char name[20];
	int count;
};


void test02()
{
	struct Person leader[3] = { "li", 0, "hao", 0, "bin", 0 };
	int i, j;
	char leader_name[20];

	for ( i = 0; i <= 10; i++)
	{
		scanf("%s", leader_name);
		for (j = 0; j < 3; j++)
		{
			if (strcmp(leader_name, leader[j].name) == 0)
			{
				leader[j].count++;
			}
		}
	}
	printf("\nResult:\n");
	for ( i = 0; i < 3; i++)
	{
		printf("%5s:%d\n", leader[i].name, leader[i].count);
	}
}

struct Student_1
{
	long num;
	char name[20];
	char sex;
	float score;
};

void test03()
{
	struct Student_1 stu_1;
	struct Student_1 *p;
	char* str_format = "NO.:%ld\nname:%s\nsex:%c\nscore:%d\n";

	p = &stu_1;
	stu_1.num = 1234;
	strcpy(stu_1.name, "hao.fu");
	stu_1.sex = 'M';
	stu_1.score = 100;

	printf("===========================================\n");
	printf(str_format, stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
	printf("===========================================\n");
	printf(str_format, (*p).num, (*p).name, (*p).sex, (*p).score);
	printf("===========================================\n");
	printf(str_format, p->num, p->name, p->sex, p->score);
}

struct Student_2
{
	long num;
	char name[20];
	char sex;
	int age;
};

void test04()
{
	struct Student_2 stu[3] = { {1,"hao", 'M', 20}, {2, "fu", 'M', 23}, {3, "bin", 'S'} };
	struct Student_2* p;
	char* str_format = "NO.:%ld\nname:%s\nsex:%c\nage:%d\n";

	printf("===========================================\n");
	printf("stu size: %ld\n", sizeof(stu) / sizeof(struct Student_2));

	for ( p = stu; p < (stu + sizeof(stu)/sizeof(struct Student_2)); p++)
	{
		printf("===========================================\n");
		printf(str_format, p->num, p->name, p->sex, p->age);
	}
}




int main()
{
	// test01();
	// test02();
	// test03();
	test04();


	return 0;
}