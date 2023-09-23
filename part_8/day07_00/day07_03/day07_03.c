#define _CRT_SECURE_NO_WARNINGS 1

/*
	指向函数的指针：
		背景：
			在程序中定义了一个函数，在编译时会把函数的源代码转换为可执行代码并分配到一段存储空间；
			这段内存空间有一个起始地址，也称为函数的入口地址；
			每次调用这个函数时，都从该地址入口开始指向此段函数代码；
			函数名代表函数的起始地址；

		通过背景可知，函数名就是函数的指针，代表函数的起始地址；
		定义：
			类型名 （* 指针变量名）(函数参数表列)；

		使用：
			指针变量名 = 函数名
			（* 指针变量名）(函数参数表列)

		特点：
			1、不能对指向函数的指针变量进行算术运算，比如++ --,没有实际意义；
			2、函数指针变量的好处：只要函数原型一样(除了函数名完全一样)，可以通过函数指针变量完成动态切换；
			

		用指向函数的指针作为函数参数：
			其实这是c语言开发接口框架的用法；
			这也是函数指针的用途
			把函数的入口地址作为传递到其他函数中，供其调用，实现业务逻辑的衔接逻辑，不负责功能模块的实现；

		
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
