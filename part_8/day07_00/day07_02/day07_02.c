#define _CRT_SECURE_NO_WARNINGS 1

/*
	通过指针引用字符串：
		c语言中，字符串存放在字符数组中

		字符指针作为函数参数：
			方式1：用地址传递的方式，即字符数组名作为参数；
			方式2：用字符指针变量作参数；

		字符指针变量和字符数组的比较：
			1、字符数组内部存储的是每个元素；而字符指针变量内存储的是地址；
			2、字符指针变量可以被赋值，而字符数组名不能；

			字符指针变量在定义是置空NULL或者在定义后及时赋值，不要未赋值直接使用；
*/

#include <stdio.h>

void test01()
{
	char string[] = "i love china!";
	char* p = NULL;

	p = string;

	printf("%s\n", string);
	printf("%s\n", p);
	printf("%c\n", string[7]);
}

void test02()
{
	char *string = "i love china!";
	char* p;

	p = string;

	printf("%s\n", string);
	printf("%s\n", p);
	printf("%c\n", string[7]);
}

void test03()
{
	void copy_string(char from[], char to[]);

	char a[] = "i am a teacher.";
	char b[] = "you are a student.";

	printf("%s\n", a);
	printf("%s\n", b);
	copy_string(a, b);
	printf("%s\n", a);
	printf("%s\n", b);
}

void copy_string(char from[], char to[])
{
	int i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}

void copy_string_1(char from[], char to[])
{
	while (*to++ = *from++);
}

void copy_string_2(char from[], char to[])
{
	for (; *to++ = *from++;);
}

void test04()
{
	// printf format
	int a = 1, b = 2;
	// char format[] = "a=%d,b=%d\n";
	char *format = "a=%d,b=%d\n";
	printf(format, a, b);
}


int main()
{
	// test01();
	// test02();
	// test03();

	test04();

	return 0;
}