#define _CRT_SECURE_NO_WARNINGS 1

/*
	ָ�룺c���Ե�һ����ɫ
		���ݴ洢���ڶԳ�����б���ʱ��ϵͳ�ͻ��������������ڴ浥Ԫ������ϵͳ����ݱ������ͷ���һ�����ȵĿռ䣻
		ϵͳ������ڴ浥Ԫ��α�ʶ�أ�
			λ����Ϣ + ����ռ�ÿռ䣨��С��

		C�����еĵ�ַ������ַ��Ϣ���ڴ��ţ�����ַ��������ָ������ݵ�������Ϣ���������͵ĵ�ַ��

		ֱ�ӷ��ʣ�ֱ��ͨ�����������з��ʣ�
		��ӷ��ʣ��������ĵ�ַ��ŵ���һ�������У�Ȼ��ͨ���ñ������ҵ�ǰһ�������ĵ�ַ���Ӷ���ӵķ��ʸñ�����

		ָ�������
			һ������ר�Ŵ�ŵ�ַ�ı�����

			���壺
				������  *ָ�������

			���ã�
				��ָ�������ֵ�� p = &a
				����ָ�����ָ��ı����� &p
				����ָ�������ֵ�� p

		ָ�������Ϊ����������
			��һ�������ĵ�ַ���͵���һ�������У�
			���Լ��ٺ����ڸı�return���ⲿ

		ͨ��ָ���������飺
			��������Ԫ�صķ�����
				1���±귨�� a��һ��ָ���ͳ���,������lvaue
					a[i]
				2��ָ�뷨�� ��ʹĿ������������ߣ�
					*(p + i)

			�������������������������飬ֻ����������Ԫ�صĵ�ַ��
			ָ������㣺
				���ָ�����p��ָ�������һ��Ԫ�أ���p+1��ʾָ����һ��Ԫ�أ�
					+1 ��ʾ����һ������Ԫ����ռ�õ��ֽ�����ͨ��ָ�����;Ϳ���֪��+1�������ʲô





*/

#include <stdio.h>

void test01()
{
	int a = 100;
	int b = 10;
	int* pointer_1, * pointer_2;
	pointer_1 = &a;
	pointer_2 = &b;

	printf("a = %d, b = %d\n", a, b);
	printf("*pointer_1 = %d, *pointer_2 = %d\n", *pointer_1, *pointer_2);

}

void test02()
{
	int* p1, * p2, * p, a, b;
	printf("please enter two integer numbers: ");
	scanf("%d,%d", &a, &b);
	p1 = &a;
	p2 = &b;

	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}

	printf("a = %d, b = %d\n", a, b);
	printf("max = %d, min = %d\n", *p1, *p2);
}

void test03()
{
	void swap(int *p1, int *p2);

	int a, b;
	int* pointer_1, * pointer_2;
	printf("please enter a and b: ");
	scanf("%d,%d", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;

	if (a < b)
	{
		swap(pointer_1, pointer_2);
	}

	printf("a = %d, b = %d\n", a, b);
}

void swap(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;   // ���ڴ��ַ��ֵ���н���
	*p2 = temp;
}


void test04()
{
	int a[10];
	int i;
	
	printf("please enter 10 integer numbers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);   // �±귨
	}

}

void test05()
{
	int a[10];
	int i;

	printf("please enter 5 integer numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", a + i);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(a+i));   // ָ�뷨
	}

}


void test06()
{
	int a[10];
	int i,*p;

	printf("please enter 5 integer numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", a + i);
	}

	for (p = a; p < (a + 5); p++)
	{
		printf("%d ", *p);   // ָ�뷨
	}

}

int main()
{
	// test01();
	// test02();
	// test03();
	// test04();
	// test05();

	test06();  // ָ��Ч�����

	return 0;
}