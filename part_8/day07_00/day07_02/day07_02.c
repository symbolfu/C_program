#define _CRT_SECURE_NO_WARNINGS 1

/*
	ͨ��ָ�������ַ�����
		c�����У��ַ���������ַ�������

		�ַ�ָ����Ϊ����������
			��ʽ1���õ�ַ���ݵķ�ʽ�����ַ���������Ϊ������
			��ʽ2�����ַ�ָ�������������

		�ַ�ָ��������ַ�����ıȽϣ�
			1���ַ������ڲ��洢����ÿ��Ԫ�أ����ַ�ָ������ڴ洢���ǵ�ַ��
			2���ַ�ָ��������Ա���ֵ�����ַ����������ܣ�

			�ַ�ָ������ڶ������ÿ�NULL�����ڶ����ʱ��ֵ����Ҫδ��ֱֵ��ʹ�ã�
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