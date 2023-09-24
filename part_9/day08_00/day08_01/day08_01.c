#define _CRT_SECURE_NO_WARNINGS 1

/*
	��ָ�봦������
		����ʱһ�ֳ��������ݽṹ��
		��̬�ؽ��д洢�����һ�ֽṹ��

		������ֶ�̬�������أ�
			������
				����������У��ڶ���ʱ����Ҫָ����size�����ܽ��ж�̬�ı䣻
			������
				Ϊ�˿��Զ�̬�ĸı�size��ͬʱ���ڴ�ʹ�ø��ӳ�֣�
				������head��������
					headֻ�����ַ����һ��ֵ�ĵ�ַ��
					��㣺ֵ + ��һ��ֵ�ĵ�ַ��
					β����㣺ֻ��ֵ + ��ַΪNULL��
				ͨ����ַ�������γ���״��

			ͨ��������Կ�����������ڴ�ռ���Զ�̬�Ŀ������ӣ�ͬʱ�ڴ�ռ���Բ�������
			ʹ�ýṹ�������Ϊ�����Ϊ���ʣ�
				struct LinkPoint
				{
					struct LinkPoint * next;
					int value;
				}

			��̬����Ͷ�̬����
				��̬�����ڳ�������У��Ѿ������õ�����ṹ�������ڳ���ִ�й����а����󿪱ٿռ�ı�����ṹ��
				��̬�����ڳ���ִ�й����а����󿪱ٿռ�ı�����ṹ��


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
	//��̬����
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
	scanf("% ld, % ld", &p1->num, &p1->score);      // -> ���ȼ�����&
	
	while (p1->num != 0)
	{
		n++;
		if (n == 1) head = p1;
		else p2->next = p1;

		p2 = p1;           // P2���ڼ�¼��һ��������Ϣ��
		p1 = (struct Student*)malloc(LEN);          // ��ʵ���create������̫�ã������һ���ڴ�ռ��˷ѣ�
		scanf("% ld, % ld", &p1->num, &p1->score);
	}

	p2->next = NULL;
	return head;


}

void test02()
{
	// ��̬����
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