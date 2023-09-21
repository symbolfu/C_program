#define _CRT_SECURE_NO_WARNINGS 1


/*
		二位数组：
			又称矩阵matrix：
				row，column
			定义：
				类型说明符  数组名[常量表达式][常量表达式]
			引用：
				数组名[下标1][下标2]
				下标1：表示row
				下标2：表示column
			初始化：形式非常丰富
				分行赋值：
					int a[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}}
				一行赋值：
					int a[3][4] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4}
				部分赋值：缺少元素为0
					int a[3][4] = {{1, }, {}, { 4}}
				第一维省略：
					int a[][4] = {{1, }, {}, { 4}}

*/

#include <stdio.h>


void test01()
{
	
	int a[2][3] = { {1, 2, 3},
				   {3, 4, 5} };
	int b[3][2], i, j;

	printf("array a: \n");
	for ( i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++) 
		{
			printf("%5d ", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}

	printf("array b: \n");
	for ( i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			printf("%5d ", b[i][j]);
		}
		printf("\n");
	}

}


void test02()
{
	// find max value and the index of max value 
	int i, j, k, max;
	int row = 0, colum = 0;
	int a[3][4] = { {1, 2,3, 4}, {123,43,21,1}, {123,222,555} };
	max = a[0][0];

	for ( i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				colum = j;
			}
		}
	}

	printf("max = %d\nrow = %d\ncolum = %d\n", max, row, colum);
	return 0;

}


int main()
{
	test01();
	test02();

	return 0;
}
