#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test01()
{
	// i + ii + iii + ...
	int n;
	int number = 3;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += number;
		number = number * 10 + number;
	}
	
	printf("%d\n", sum);
}

void test02()
{
	// 1! + 2! + 3!+ ...
	int n;
	int sum = 1;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		sum = sum + sum * i;
	}

	printf("sum = %d\n", sum);
}

void test03()
{
	int n, i, mod;
	int temp;

	scanf("%d", &n);
	temp = n;

	for (i = 1; i <= n; i++)
	{
		mod = temp % 10;
		temp = temp / 10;
		
		printf("%d\n", mod);
		if (temp == 0)
			break;
	}

	printf("the size of n: %d\n", i);


}



int main()
{
	// test01();
	// test02();
	test03();

	return 0;
}