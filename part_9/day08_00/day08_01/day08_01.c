#define _CRT_SECURE_NO_WARNINGS 1

/*
	用指针处理链表：
		链表时一种常见的数据结构；
		动态地进行存储分配的一种结构；

		如何体现动态的特性呢：
			背景：
				在数组变量中，在定义时就需要指定其size，不能进行动态改变；
			引出：
				为了可以动态的改变size；同时让内存使用更加充分；
				链表由head，结点组成
					head只保存地址，下一个值的地址；
					结点：值 + 下一个值的地址；
					尾部结点：只有值 + 地址为NULL；
				通过地址让数据形成链状；

			通过定义可以看出，链表的内存空间可以动态的开辟链接，同时内存空间可以不连续；
			使用结构体变量作为结点最为合适；
				struct LinkPoint
				{
					struct LinkPoint * next;
					int value;
				}

			静态链表和动态链表：
				静态链表：在程序代码中，已经构建好的链表结构，而非在程序执行过程中按需求开辟空间改变链表结构；
				动态链表：在程序执行过程中按需求开辟空间改变链表结构；


*/


#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int num;
	int score;
	struct Student* next;
};

void test01()
{
	//静态链表
	struct Student a, b, c, * head, * p;

	a.num = 1;
	a.score = 100;
	b.num = 2;
	b.score = 200;
	c.num = 3;
	c.score = 300;

	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;

	do
	{
		printf("%ld %d\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
}


#define LEN sizeof(struct Student)

struct Student* create(void)
{
	static int n = 0;
	struct Student* head=NULL, * p1, * p2;

	p1 = p2 = (struct Student*)malloc(LEN);
	scanf("% ld, % ld", &p1->num, &p1->score);      // -> 优先级高于&
	
	while (p1->num != 0)
	{
		n++;
		if (n == 1) head = p1;
		else p2->next = p1;

		p2 = p1;           // P2用于记录上一个结点的信息；
		p1 = (struct Student*)malloc(LEN);          // 其实这个create函数不太好，会存在一个内存空间浪费；
		scanf("% ld, % ld", &p1->num, &p1->score);
	}

	p2->next = NULL;
	return head;


}

void test02()
{
	// 动态链表
	struct Student* pt;
	pt = create();

	printf("\nnum:%d\nscore:%d\n", pt->num, pt->score);

}


int main()
{
	// test01();

	test02();

	return 0;
}