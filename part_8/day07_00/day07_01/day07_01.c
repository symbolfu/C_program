#define _CRT_SECURE_NO_WARNINGS 1

/*
	通过指针引用多维数组
		int a[3][4]
		从二维数组来看，a表示二维数组首元素的地址，但是与一维数组不同的是，现在的首地址不是一个简单的整型元素;
		而是由4个整型元素组成的一维数组，因此a表示的是首行的起始地址，a+1表示第二行的首地址
		a[0]即表示一维数组名，又表示一维数组的首地址；

		******************************************************************************************************
		注意：学习指针是一定要明白指针或者地址到底表示什么，根据下面两点去分析就不会在有任何问题
			地址包含两部分的信息：
				1、纯地址
				2、基类型
		******************************************************************************************************

			int (*p)[4]与 int * p[4]的区别？
				int (*p)[4]：定义了一个类型为int [4] 的指针变量，这个指针指向由4个整数组成的一维数组；
				int * p[4]： 定义了一个指针数组，大小为4，每个元素为int *；

		用指向数组的指针作函数参数：
			一维数组名可以作为函数参数，多维数组也是可以的；
			方法：
				1、用指向变量的指针变量；
				2、用指向一维数组的指针变量


*/


#include <stdio.h>

void test01()
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int* p;

	for ( p = a[0]; p < a[0] + 12; p++)
	{
		if ((p - a[0]) % 4 == 0)
		{
			printf("\n");
		}
		printf("%4d", *p);
	}
}

void test02()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int (* p)[4], i, j;

	p = a;

	printf("please enter row and column: ");
	scanf("%d,%d", &i, &j);
	printf("a[%d,%d] = %d\n", i, j, *(*(p + i) + j));
}

void test03()
{
	void average(float* p, int n);

	void search(float (*p)[4], int n);

	float score[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	average(*score, 12);       // 数组首元素score[0][0]地址
	search(score, 2);
}

void average(float* p, int n)
{
	float* p_end;
	float sum = 0, aver;

	p_end = p + n;

	for (; p < p_end; p++)
	{
		sum += (*p);
	}
	aver = sum / n;
	printf("average = %5.2f\n", aver);
}


void search(float (*p)[4], int n)
{
	int i;
	
	printf("the score of No.%d are:\n", n);
	for ( i = 0; i < 4; i++)
	{
		printf("%5.2f ", *(*(p + n) + i));
	}
}






int main()
{
	// test01();
	// test02();

	test03();

	return 0;
}