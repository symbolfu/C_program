#define _CRT_SECURE_NO_WARNINGS 1

/*
	选择结构程序设计：
		 C语言提供了两种选择语句：
			if语句
			switch语句

		if语句一般形式：
			if (表达式)
				语句1
			else if
				语句2
			else
				语句3

			表达式可以是：
				关系表达式
				逻辑表达式
				数值表达式

			关系表达式：
				在c语言中，具有比较符的表达式；
				== 和 ！=的优先级比其他比较符低；

			逻辑运算符和逻辑表达式：
				逻辑运算符：
					&&
					||
					！
				用逻辑运算符将关系表达或者其他表达式连接起来的式子就是逻辑表达式；
				优先级：
					！ > && > ||
				注意：逻辑表达式的code是有一定技巧的，可以提高程序的效率，比如&&，左侧判断为假时，右侧就不会计算了
				思考这个表达式的真假：（m=1>2）&& (n=4>3)

			条件运算符和条件表达式：
				条件运算符：？和：   唯一的三目运算符
					其实我理解：条件表达式为if的简便写法
				条件表达式：
					表达式1 ？ 表达式2 ：表达式3


		switch语句：
			多分支选择语句；
			当if语句层次太多，程序冗长而且可读性降低；
			switch语句一般形式：
				switch(表达式)
				{
					case 常量1: 语句1
					case 常量2: 语句2
					case 常量3: 语句3
					default: 语句4
				}

				表达式的值的类型应该是整数类型
				注意：case标号只起标记的作用。执行switch语句时，根据switch表达式的值找到匹配的入口标号，并在此处不进行条件检查，
					在执行完一个case标记后面的语句后，就从此标记处继续往下执行，所以常常每个case最后都会紧跟一个break；
				code风格：
					case子句包含多条语句时，可以不用{}包裹，这是由case语句特性决定的，当然也是可以添加的；
					共用一组执行语句时：
						case 'A':
						case 'B':
						case 'C': XXXXX
				在程序中，常常用switch语句做菜单命令控制


*/

#include <stdio.h>
#include <math.h>


void test01()
{
	double a, b, c, disc, x1, x2, p, q;

	scanf("%lf%lf%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;

	if (disc < 0)
		printf("the question hasn't real roots\n");
	else
	{
		p = -b / (2.0 * a);
		q = sqrt(disc) / (2.0 * a);
		x1 = p + q;
		x2 = p - q;

		printf("real roots:\nx1=%7.2f\nx2=%7.2f\n", x1, x2);
	}
}

void test02()
{
	float a, b, t;

	scanf("%f,%f", &a, &b);

	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	printf("%5.2f,%5.2f", a, b);
}


void test03()
{
	char ch;

	scanf("%c", &ch);

	ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
	printf("%c\n", ch);
}

void test04()
{
	char grade;

	scanf("%c", &grade);
	printf("your score:");
	switch (grade)
	{
	case 'A': printf("80~100\n"); break;
	case 'B': printf("70~79\n"); break;
	case 'C': printf("60~69\n"); break;
	case 'D': printf("<60\n"); break;
	default: printf("enter data error!\n");
		
	}
}


void test05()
{
	int year, leap;
	printf("enter year:");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				leap = 1;
			}
			else
			{
				leap = 0;
			}
		}
		else
		{
			leap = 1;
		}
	}
	else
	{
		leap = 0;
	}

	if (leap)
	{
		printf("%d is ", year);
	}
	else
	{
		printf("%d is not ", year);
	}
	printf("a leap year.\n");

}


int main()
{
	// test01();
	// test02();
	// test03();
	// test04();
	test05();

	return 0;
}