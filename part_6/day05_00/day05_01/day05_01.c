#define _CRT_SECURE_NO_WARNINGS 1


/*
		��λ���飺
			�ֳƾ���matrix��
				row��column
			���壺
				����˵����  ������[�������ʽ][�������ʽ]
			���ã�
				������[�±�1][�±�2]
				�±�1����ʾrow
				�±�2����ʾcolumn
			��ʼ������ʽ�ǳ��ḻ
				���и�ֵ��
					int a[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}}
				һ�и�ֵ��
					int a[3][4] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4}
				���ָ�ֵ��ȱ��Ԫ��Ϊ0
					int a[3][4] = {{1, }, {}, { 4}}
				��һάʡ�ԣ�
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
