#define _CRT_SECURE_NO_WARNINGS 1

/*
	使用数组处理批量数据：
		具有同一属性的数据组成一个数组array；
		特点：
			一组有序数据额集合；
			可以通过下标索引；
			数组中的每个元素属于同一个数据类型；

		下面将从一下问题介绍数组：
			数组分类：
				一维数组；
				二位数组；
				字符数组；
			问题：数据结构无外乎回答：“定义、初始化、增删改查”
				数组如何定义？
				数组如何初始化？
				数组如何引用？

		一维数组：
			定义：
				类型说明符  数组名[常量表达式]
			引用：
				数组名[下标]
			初始化：默认为随机值，内存残留的值
				定义时就初始化：
					1、全部元素被赋值
					2、部分元素被赋值，未赋值的默认为0；
					3、定义同时赋值，可以不指定常量表达式；
			

*/

#include <stdio.h>

void test01()
{
	int i, a[10];

	for (i = 0; i <= 9; i++)
	{
		a[i] = i;
	}

	for (i = 9; i > 0; i--)
	{
		printf("%d\n", a[i]);
	}
}


void test02()
{
	// fib
	int i;
	int f[20] = { 1, 1 };

	for ( i = 2; i < 20; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}

	for ( i = 0; i < 20; i++)
	{
		if (i % 5 == 0) printf("\n");
		printf("%12d", f[i]);
	}
}

void test03()
{
	// 排序：冒泡排序法
	int a[10];
	int i, j, t;

	printf("input 10 numbers: \n");
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j+1] = t;
			}
		}
	}

	printf("the sorted numbers: \n");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


int main()
{
	test01();
	test02();
	test03();

	return 0;
}