#define _CRT_SECURE_NO_WARNINGS 1

/*
	返回指针值的函数：
		即函数的返回值为指针；

		定义：
			类型名 *函数名（参数表列）

	指针数组：
		即数组的元素为指针类型；
		定义：
			类型名 * 数组名[数组长度]

	多重指针：
		指向指针的数据的指针变量；即指向指针的指针；

	指针数组作为main函数的形参：
		int main（int argc, char * argv[]）
		命令行参数
			argc：参数个数
			argv： 参数向量；
			
*/

#include <stdio.h>


void test01()
{
	float score[][4] = { {60,70,80,90}, {56,76,33,65}, {12,55,77,33} };
	float* search(float(*pointer)[4], int n);
	float* p;
	int i, k;

	printf("enter the number of student: ");
	scanf("%d", &k);
	printf("the cores of No.%d are: \n", k);
	p = search(score, k);

	for ( i = 0; i < 4; i++)
	{
		printf("%5.2f\t", *(p+i));
	}

	printf("\n");
}

float* search(float(*pointer)[4], int n)
{
	return *(pointer + n);
}


void test02()
{
	char* name[] = {"abcd", "erqr"}; 
	char** p;
	int i;

	for ( i = 0; i < 2; i++)
	{
		p = name + i;
		printf("%s\n", *p);
	}
}


int main()
{
	// test01();
	test02();

	return 0;
}