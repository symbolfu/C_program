#define _CRT_SECURE_NO_WARNINGS 1


/*
	language:
		1、low level language
			1、machine language
			2、assembler language
		2、high level language
			c
			c++
			java
			fortran 
			python
			...
	翻译：
		编译程序的软件把高级语言写的程序，即源程序，转换成机器指令的程序，即目标程序
			源程序source program -----> 目标程序object program


	高级语言发展阶段：
		1、非结构化的语言
		2、结构化的语言
		3、面对对象的语言
*/

/*
	C语言特点：
		1、简洁，紧凑
			c语言是一个很小的内核语言，一般不直接提供io操作、文件操作和动态内存管理的方法，这些都是由操作系统提供的库函数来实现的
		2、能直接操作物理地址
		3、语法限制不太严格，程序设计自由度大
*/

// 第一个c程序
#include <stdio.h>

void test01()
{
	printf("this is a C program\n");
}


void test02()
{
	int a, b, sum;

	a = 123;
	b = 456;

	sum = a + b;
	printf("sum is %d\n", sum);

}


void test03()
{
	int max(int x, int y);   // 声明
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = max(a, b);
	printf("the value of c is %d\n", c);
}

int max(int x, int y)
{
	int z;

	if (x > y)
		z = x;
	else
		z = y;

	return z;
}

int main()
{
	test01();
	test02();
	test03();

	return 0;
}



/*
	C程序如何编程可执行程序：
		1、通过编译工具把源程序转变为目标程序；
			.c  ---》 .obj
			1）预编译：
				利用c编译系统提供的预编译器对程序中的预处理指令进行编译预处理；
			2）正式编译：
				由预处理得到的信息和程序其他部分一起进行编译
			编译程序的作用：
				检查语法错误
				编程序自动将源程序转换为二进制形式的目标程序，即obj文件
		2、将obj和库函数和其他函数链接起来形成可行文件exe
			why：
				一个程序可能包含多个程序文件，而编译是以源文件为对象的，一次编译只能得到一个源程序相对应的目标文件；
				即产生的目标程序只是整个程序的一部分；
				所以需要将所有的编译后得到的目标文件链接起来；
				再与函数库相链接，形成一个完整的可执行文件；
		
*/