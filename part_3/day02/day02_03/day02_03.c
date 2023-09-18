#define _CRT_SECURE_NO_WARNINGS 1

/*
	数据的输入输出
		C语言本身不提供输入输出语句；输入输出操作是由C标准函数库中的函数来实现的；
		C提供的标准函数以库的形式在C的编译系统中提供，它们不是c语言文件中的组成部分；

		各种C编译系统提供的系统函数库是各软件公司编制的：
			它包括了c语言建议的全部标准函数，还根据用户需求补充一些常用的函数；
			对它们进行了编译，成为目标文件，它们在程序链接阶段与源程序经编译产生的目标文件相链接，产生可执行文件；
		
		在程序文件的开头用预处理指令#include把有关头文件放到程序中
			#include < >: 标准方式，直接去C编译系统的子目录下找需要包含的文件
			#include " ": 本地寻找：先在用户存放源程序文件的子目录寻找，如果没有找到，则按标准方式寻找；
							引号内可以添加绝对路径；
		printf函数输出数据：
			printf(格式控制，输出表列)
			格式控制

		scanf函数输入数据
			scanf(格式控制，地址表列)
			scanf函数中格式控制后应当是变量地址；

		字符输入输出：
			putchar：输出一个字符
				putchar(c)
			getchar: 输入一个字符
				getchar()

*/


#include <stdio.h>
#include <math.h>

void test01()
{
	double a, b, c, disc, x1, x2, p, q;

	// 输入函数
	scanf("%lf %lf %lf", &a, &b, &c);
	disc = b * b + 4 * a * c;
	p = -b / (2.0 * a);
	q = sqrt(disc) / (2.0 * a);
	x1 = p + q;
	x2 = p - q;

	// 输出函数
	printf("x1 = %7.2f\nx2 = %7.2f\n", x1, x2);
}


void test02()
{
	char a = 'a';
	char b = 96;

	a = getchar();
	b = getchar();

	putchar(a);
	putchar(b);
}

void test03()
{
	// 大小写转换
	char c1, c2;

	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');

}


int main()
{
	// test01();
	
	//test02();

	test03();


	return 0;
}