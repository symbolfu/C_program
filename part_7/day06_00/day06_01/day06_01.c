#define _CRT_SECURE_NO_WARNINGS 1

/*
	������Ϊ������������������ֻ�ܽ��е��򴫵�
		����Ԫ����Ϊ���������������
			ֻ����Ϊʵ�Σ�����ֵ���ݣ�

		���������Ϊ�����Ĳ��������
			���������Ϊʵ��Ҳ������Ϊ�βΣ�
			��������Ϊ����ʵ��ʱ�����βΣ�ָ��������������������ݵ�ʱ������Ԫ�صĵ�ַ��
			����������Ϊ�β�ʱ��ָ������Ĵ�С�ǲ������κ�Ч������Ϊc���Ա���ϵͳ��������β�����Ĵ�С��������Ϊָ���������
			ֻ�ǽ�ʵ���������Ԫ�صĵ�ַ�����β�����������һ�������βζ��巽ʽ�� a[]��

	��ά��������Ϊ����������
		��ʽ��ʾ��a[][��С]
			һ�����ֻ�ܵ�һά����ʡ�ԣ�



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
	// ѡ������:
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


