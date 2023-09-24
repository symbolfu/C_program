#define _CRT_SECURE_NO_WARNINGS 1


/*
	共用体类型：
		背景：
			有时想用同一段内存单元存放不同类型的变量；

		需求特点：
			同一段内存单元；
			存放不同类型数据；

		定义：
			union 共用体名
			{
				成员表列
			} 变量表列；
			变量表列可以省略；

		初始化：
			同时只能对共用体变量中的一个成员进行初始化；

		引用：
			引用方式和结构体类似；
			不能对变量进行赋值；

		在每个瞬间，存储单元只能有唯一的内容；即其实共用体变量中只能存放一个值；


	枚举类型：
		把可能的值一一列举出来；即变量的值只能限于列举出来的值的范围；

		声明：
			enum 枚举名 {枚举元素列表}
				其中枚举名可以省略；
			当省略枚举名时，在声明时需要定义变量：
				enum {枚举元素列表} 变量名表列；

			枚举元素列表分隔符为逗号；

		c编译对枚举类型的枚举元素按常量处理，即称枚举常量；所以不能对其赋值；

		引用：
			直接使用枚举类型中的元素；无需加特殊任何符号；


	用typedef声明新类型：
		使用场景：
			1、用一个简单、清晰、新的类型名代替原来的类型名：
				typedef int Interger;
				需要分号；
			2、用一个简单、清晰、新的类型名代替复杂的类型名；
				typedef int * IntPt;
				其实这个场景中经常容易出错；
				1、命名一个新的类型名代替结构体：
					typedef struct { int month; int day;} Date;
					新类型名Date;
				2、命名一个新的类型名代替数组类型：
					typedef int Num[100];
					Num为新的类型；
				3、命名一个新的类型名代替指针类型；
					typedef char * String;
					String为新的类型；
				4、命名一个新的类型名代替指向函数的指针类型：
					typedef int (* Pointer)();
					Pointer为新的类型；

		规则：
			按定义变量的方式，
				1、把变量名替换为新类型名
				2、在最前面加typedef

			习惯性把第一个字母大写；



	
*/


#include <stdio.h>

enum Color
{
	red,
	yellow,
	blue,
	white,
	black
};




void test01()
{
	enum Color i, j, k, pri;
	int n=0, loop;

	for ( i = red; i <= black; i++)
	{
		for (j = red; j <= black; j++)
		{
			if (i != j);
				
		}
	}

}


int main()
{
	test01();

	return 0
}