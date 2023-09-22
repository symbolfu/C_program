#define _CRT_SECURE_NO_WARNINGS 1

/*
	数组作为函数参数：函数参数只能进行单向传递
		数组元素作为函数参数的情况：
			只能作为实参，进行值传递；

		数组变量作为函数的参数情况：
			数组可以作为实参也可以作为形参；
			数组名作为函数实参时，相形参（指针变量或者数组名）传递的时数组首元素的地址；
			当数组名作为形参时，指定数组的大小是不会其任何效果，因为c语言编译系统并不检查形参数组的大小，将其作为指针变量处理；
			只是将实参数组的首元素的地址传给形参数组名，即一般数组形参定义方式： a[]；

	多维数组名作为函数参数：
		形式表示：a[][大小]
			一般而且只能第一维可以省略；



*/
#include <stdio.h>


void test01()
{
	int max(int a, int b);
	int a[10];
	int m, n, i;

	printf("enter 10 integer number: ");

	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("\n");

	for (i = 1, m = a[0], n = 0; i < 10; i++)
	{
		if (max(m, a[i]) > m)
		{
			m = max(m, a[i]);
			n = i;
		}
	}

	printf("larget number is %d\n", m);

}

int max(int x, int y)
{
	return (x > y ? x : y);
}


void test02()
{
	float average(float array[10]);
	float score[10], aver;
	int i;

	printf("input 10 scores: \n");
	for ( i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}

	printf("\n");

	aver = average(score);

	printf("average is %d\n", aver);

}


float average(float array[])
{
	int i;
	float aver, sum = array[0];

	for (i = 1; i < 10; i++)
	{
		sum += array[i];
	}

	aver = sum / 10;
	return aver;
}

void test03()
{
	// 选择排序:
	void sort(int array[], int n);
	int a[10], i;
	printf("enter array: \n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, sizeof(int[10]) / sizeof(int));
	for ( i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");

}

void sort(int array[], int n)
{
	int i, j, k, t;
	for ( i = 0; i < n; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[i] < array[k])
			{
				k = j;
			}
		}
		t = array[k];
		array[k] = array[i];
		array[i] = t;
	}
}


int main()
{
	// test01();
	// test02();
	test03()

	return 0;
}


