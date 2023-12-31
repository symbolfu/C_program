#define _CRT_SECURE_NO_WARNINGS 1

/*
	字符数组：
		c语言中没有字符串的概念，也就没有字符串变量；
		在c语言中符串是存在在字符型数组中；

		定义：用来存在字符的数组
			定义方式和一维数组一样；
			更常用方式：a[]
		初始化：
			方式和一维数组一样,仅仅是元素必须为字符而已；
			更常用的初始化方式：
				char c[] = "abcd"     //推荐， 默认会添加"\0"
				char c[] = {"abcd"}


	字符串和字符串的结束符：
		在c语言中， 字符串是用字符数组来处理的；
		字符串有效长度 vs 字符数组的长度；
		c语言规定了一个“字符串结束标志”：‘\0’字符；
		用字符数组存储字符串常量时会自动加一个'\0'作为结束符；  **************************

		思考：
			printf("how do you do ? \n")
			打印时如何知道在什么位置停止的？
				我个人理解：这个printf打印的字符串常量，在data区中放置数据时，就对应字符串常量添加了"\0";


	字符数组的输入输出：
		格式符号：
					%c
					%s
		输出的字符中不包括"\0";
		输出过程中遇到"\0"就会停止；
		可以用scanf("%s"，c)获取一个字符串，输入字符串长度应该小于数组长度，末尾会自动添加"\0"；
		scanf获取多个字符串时，输入时可以用空格分割；

		字符串处理函数：
			puts(字符数组): 输出字符串函数，遇到\0结束输出；
			gets(字符数组)： 输入字符串函数；
			strcat(字符数组1， 字符数组2)： 字符串连接函数，将字符串2连接到字符串1后；
					字符串1需要只够大；
			strcpy(字符数组1， 字符数组2): 字符串复制函数；
					将字符串2复制到字符串1中
					字符串1需要只够大，能够容纳字符串2的元素；
			不能用赋值语句将一个字符串或字符数组直接复制给另一个字符数组：
				str = "abc"
				str1 = str2
				原因：字符数组是一个地址常量，不能作为lvalue，即不能被改变；
			strncpy(字符数组1， 字符数组2， n个字节)：字符串复制函数
				将字符串2前n个字节复制到字符串1中
			strcmp(字符数组1， 字符数组2): 比较字符串1和字符串2：
				比较规则：从左向右，按ascii大小比较；
				相同时：返回0；
				>时：返回正整数；
				<时，返回负整数；
			strlen(字符数组1): 测试字符串长度
				测试字符串中的实际长度，不包括"\0"；

			strlwr(字符数组1): 转换成小写；
			strupr(字符数组1):  转换成大写；


			*************************************************************
				再次提醒：
					库函数并非c语言本身的组成部分；
					而是c语言编译系统为方便用户使用而提供的公共函数
			*************************************************************
			

*/

#include <stdio.h>
#include <string.h>


void test01()
{
	char c[] = { 'i', ' ', 'a', 'm', ' ', 'a', ' ', 'p' };
	int i;

	for ( i = 0; i < sizeof(c); i++)
	{
		printf("%c", c[i]);
	}
	printf("\n");
}


void test02()
{
	// count words
	char string[81];
	int i, num = 0, flag = 0;
	char c;
	gets(string);
	//printf("%s\n", string);

	for (i = 0; (c = string[i]) != '\0'; i++)
	{
		//printf("%c\n", c);
		if (c == ' ') 
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			num++;
		}
	}

	printf("there are %d words in the line.\n", num);

}


void test03()
{
	char str[3][20];
	char string[20];
	int i;

	for (i = 0; i < 3; i++)
	{
		gets(str[i]);
	}

	if (strcmp(str[0], str[1]) > 0)
		strcpy(string, str[0]);
	else
		strcpy(string, str[1]);

	if (strcmp(str[2], string) > 0)
		strcpy(string, str[2]);

	printf("\nthe larget string is: \n%s\n", string);

}


int main()
{
	// test01();
	//test02();
	test03();


	return 0;
}

