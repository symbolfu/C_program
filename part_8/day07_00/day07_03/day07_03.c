#define _CRT_SECURE_NO_WARNINGS 1

/*
	ָ������ָ�룺
		������
			�ڳ����ж�����һ���������ڱ���ʱ��Ѻ�����Դ����ת��Ϊ��ִ�д��벢���䵽һ�δ洢�ռ䣻
			����ڴ�ռ���һ����ʼ��ַ��Ҳ��Ϊ��������ڵ�ַ��
			ÿ�ε����������ʱ�����Ӹõ�ַ��ڿ�ʼָ��˶κ������룻
			����������������ʼ��ַ��

		ͨ��������֪�����������Ǻ�����ָ�룬����������ʼ��ַ��
		���壺
			������ ��* ָ���������(������������)��

		ʹ�ã�
			ָ������� = ������
			��* ָ���������(������������)

		�ص㣺
			1�����ܶ�ָ������ָ����������������㣬����++ --,û��ʵ�����壻
			2������ָ������ĺô���ֻҪ����ԭ��һ��(���˺�������ȫһ��)������ͨ������ָ�������ɶ�̬�л���
			

		��ָ������ָ����Ϊ����������
			��ʵ����c���Կ����ӿڿ�ܵ��÷���
			��Ҳ�Ǻ���ָ�����;
			�Ѻ�������ڵ�ַ��Ϊ���ݵ����������У�������ã�ʵ��ҵ���߼����ν��߼�����������ģ���ʵ�֣�

		
*/

#include <stdio.h>

void test01()
{
	int max(int,int);
	int (*p)(int, int);
	int a = 10, b = 20,c;
	p = max;
	
	c = (*p)(a, b);
	printf("max is %d\n", c);
}

//int max(int x, int y)
//{
//	return (x > y ? x : y);
//}

void test02()
{
	int max(int, int);
	int min(int, int);
	int (*p)(int, int) = NULL;        // *******************
	int a, b, c, n;
	char* str_format = "%d,%d";

	printf("please enter a and b:");
	scanf(str_format, &a, &b);

	printf("please choose 1 or 2:");
	scanf("%d", &n);

	if (n == 1) p = max;
	else if (n == 2) p = min;

	c = (*p)(a, b);

	printf("a = %d, b = %d\n", a, b);
	if (n == 1) printf("max : %d\n", c);
	else if (n == 2) printf("min : %d\n", c);

}

//int max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int min(int x, int y)
//{
//	return (x > y ? y : x);
//}


void test03()
{
	int fun(int x, int y, int (*p)(int, int));
	int max(int, int);
	int min(int, int);
	int add(int, int);
	int a = 34, b = -21, n;
	printf("please choose 1, 2 or 3:");
	scanf("%d", &n);

	if (n == 1)
	{
		fun(a, b, max);
	}
	else if (n == 2)
	{
		fun(a, b, min);
	}
	else if (n == 3)
	{
		fun(a, b, add);
	}
}

int fun(int x, int y, int (*p)(int, int))
{
	int result;
	result = (*p)(x, y);
	printf("%d\n", result);
}


int max(int x, int y)
{
	int z;
	z = (x > y ? x : y);
	printf("max = %d\n", z);
	return z;
}


int min(int x, int y)
{
	int z;
	z = (x > y ? y : x);
	printf("min = %d\n", z);
	return z;
}


int add(int x, int y)
{
	int z;
	z = x + y;
	printf("sum = %d\n", z);
	return z;
}


int main()
{
	//test01();
	// test02();

	test03();

	return 0;
}
