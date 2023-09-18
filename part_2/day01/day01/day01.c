#define _CRT_SECURE_NO_WARNINGS 1

/*
	part_2: 算法 algorithm
		程序 = 算法 + 数据结构
		数据结构：
			对数据的描述， 被操作的对象
		算法：
			对操作的描述，如何操作数据

		程序实现：
			1、算法
			2、数据结构
			3、程序设计方法
			4、语言工具
				语言工具应该是指实现1-3的载体，具体的某一种语言吧
				也就是说，1-3是独立于语言以外的知识！

		三种基本结构
			1、顺序结构
			2、选择结构
			3、循环结构

		在算法构思时，使用伪代码（pseudo code）能够提高效率且易读；

*/


#include <stdio.h>

void test01(int n)
{
	// 计算n！
	int i, t;
	t = 1;
	i = 2;

	while (i<= n)
	{
		t = t * i;
		i = i + 1;
	}

	printf("%d! is %d\n", n, t);
}

void test02()
{
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;

	while (deno <= 100)
	{
		sign = -sign;
		term = sign / deno;
		sum = sum + term;
		deno = deno + 1;
	}

	printf("the value is %f\n", deno);
}



int main()
{
	test01(5);
	test02();


	return 0;
}



/*
	结构化编程的思路：
		1、自顶向下
		2、逐步细化
		3、模块化设计；
			模块的独立性，一个模块完成一项功能，耦合性越小越好！
		4、结构化编码；
			使用机构化语句合理调用已经设计浩的功能模块或算法
	
*/

