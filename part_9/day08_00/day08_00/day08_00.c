#define _CRT_SECURE_NO_WARNINGS 1


/*
	�û��Լ��������������ͣ�
		�ṹ�壺
			�û������ɲ�ͬ����������ɵ�����͵����ݽṹ��
			�ֳƼ�¼record����ʾһ�����ݼ�¼��һ�����ݼ�¼���԰����ܶ���Ϣ��

			�����ṹ�壺�ṹ����һ������ĸ��д
				struct �ṹ����
				{
					��Ա����
				}��

			����ṹ�����ͱ�����
				struct �ṹ���� ��������

			���������͵�ͬʱ���������
				struct �ṹ����
				{
					��Ա����
				} ���������У�


			�ṹ������ĳ�ʼ����
				��ʽ1����ʼ��������������ʽ  a = {}
				��ʽ2����ֻ��ʼ�����ֳ�Աʱ  a = {.element="xxxx"}

			�ṹ����������ã�
				���������һ���ʾ�ṹ������ĳ�Ա�����ã�
				ʹ��.���Ž���������

			�ṹ����������㣺
				1���ṹ������ĳ�Ա��������ͨ����һ�����и������㣻
				2��ͬ��Ľṹ����������໥��ֵ�� a = b
				3���������ýṹ�������Ա�ĵ�ַ�� &a.c


		�ṹ�����飺
			�ṹ��һ����Ϊһ���й���������������
			�������ڴ����ͬ�������͵������������ظ�������

		�ṹ��ָ�룺
			ָ��ṹ�������ָ�룻
			һ���ṹ���������ʼ��ַ��������ṹ�������ָ�룻
			�ýṹ��ָ��ȿ���ָ��ṹ�������Ҳ����ָ��ṹ������еĳ�Ա��

			�ṹ��ָ������Ķ����֮ǰָ��Ķ��岢��ʲô���
				struct A * a

			�ṹ��ָ�����ó�Ա��->����

			ָ��ṹ�������ָ�룺
				����ͨ�����ָ���޲��
				ֻ�Ƕ��˽ṹ��ĳ�Ա���÷�ʽ->;


		�ýṹ������ͽṹ�������ָ��������������
			�����ʹ�÷�ʽ�ͱ�����Ϊ��ͨ��������ͨ������ָ��һ����



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