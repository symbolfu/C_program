#define _CRT_SECURE_NO_WARNINGS 1

/*
	循环结构程序设计：
		解决重复操作的事情；
		
		while语句
			先判断，再执行
			while (表达式) 语句
			语句即循环体

		do...while语句：
			先执行一次，再判断
			do
				语句
			while(表达式)

		for语句：
			for(表达式1；表达式2；表达式3)
				语句
			表达式1：
				设置初始条件，只执行一次，可以为零或多个变量设置初始值，用逗号分割；
					逗号：用于分割多个表达式；逗号表达式的标准名称，叫顺序表达式；
					逗号表达式：从左往右执行，整个表达式的值为最右边表达式的值；
			表达式2：
				循环条件表达式，判断是否继续循环；
				在每次执行循环体前执行；
			表达式3：
				作为循环的调整，即增量控制
			三个表达式都可以省略：
				表达式2省略，表示条件永远为真；
				表达式1可以放到for循环前；
				表达式3可以放到for循环体内；
				极端情况：
					for (;;) printf("xxxxx")
					等价于：
					while(1) printf("xxxx")

		改变循环的执行状态：
			break语句
			continue语句



*/


#include <stdio.h>


void test01()
{
	int i = 1, sum = 0;

	while (i <= 100)
	{
		sum += i;
		i++;
	}

	printf("sum = %d\n", sum);
}

void test02()
{
	int i = 1, sum = 0;

	do
	{
		sum += i;
		i++;
	} while (i <= 100);
	printf("sum = %d\n", sum);
}


void test03()
{
	int i, j, n = 0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 5; j++, n++)
		{
			if (n % 5 == 0)
				printf("\n");
			printf("%d\t", i * j);
		}
	}
	printf("\n");
}


void test04()
{
	// fibonacci
	int f1 = 1, f2 = 1, f3;
	int i;

	printf("%12d\n%12d\n", f1, f2);
	for (i = 1; i <= 38; i++)
	{
		f3 = f1 + f2;
		printf("%12d\n", f3);
		f1 = f2;
		f2 = f3;
	}
}


void test05()
{
	// 素数
	int n, i;
	printf("please enter a interger number, n=? ");
	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			break;
	}

	if (i < n)
		printf("%d is not a prime number.\n", n);
	else
		printf("%d is a prime number.\n", n);

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