#define _CRT_SECURE_NO_WARNINGS 1

/*
	指针：c语言的一大特色
		数据存储：在对程序进行编译时，系统就会给这个变量分配内存单元；编译系统会根据变量类型分配一定长度的空间；
		系统分配的内存单元如何标识呢：
			位置信息 + 数据占用空间（大小）

		C语言中的地址包括地址信息（内存编号，纯地址）和它所指向的数据的类型信息；即带类型的地址；

		直接访问：直接通过变量名进行访问；
		间接访问：将变量的地址存放到另一个变量中，然后通过该变量来找到前一个变量的地址，从而间接的访问该变量；

		指针变量：
			一个用来专门存放地址的变量；

			定义：
				类型名  *指针变量名

			引用：
				给指针变量赋值： p = &a
				引用指针变量指向的变量： &p
				引用指针变量的值： p

		指针变量作为函数参数：
			将一个变量的地址传送到另一个函数中；
			可以减少函数内改变return到外部

		通过指针引用数组：
			引用数组元素的方法：
				1、下标法： a是一个指针型常量,不可做lvaue
					a[i]
				2、指针法： 能使目标程序质量更高；
					*(p + i)

			程序中数组名不代表整个数组，只代表数组首元素的地址；
			指针的运算：
				如果指针变量p已指向数组的一个元素，则p+1表示指向下一个元素；
					+1 表示加上一个数组元素所占用的字节数；通过指针类型就可以知道+1具体代表什么





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
	*p1 = *p2;   // 让内存地址中值进行交换
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
		printf("%d ", a[i]);   // 下标法
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
		printf("%d ", *(a+i));   // 指针法
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
		printf("%d ", *p);   // 指针法
	}

}

int main()
{
	// test01();
	// test02();
	// test03();
	// test04();
	// test05();

	test06();  // 指向效率最快

	return 0;
}