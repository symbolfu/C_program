#define _CRT_SECURE_NO_WARNINGS 1

/*
	ѭ���ṹ������ƣ�
		����ظ����������飻
		
		while���
			���жϣ���ִ��
			while (���ʽ) ���
			��伴ѭ����

		do...while��䣺
			��ִ��һ�Σ����ж�
			do
				���
			while(���ʽ)

		for��䣺
			for(���ʽ1�����ʽ2�����ʽ3)
				���
			���ʽ1��
				���ó�ʼ������ִֻ��һ�Σ�����Ϊ������������ó�ʼֵ���ö��ŷָ
					���ţ����ڷָ������ʽ�����ű��ʽ�ı�׼���ƣ���˳����ʽ��
					���ű��ʽ����������ִ�У��������ʽ��ֵΪ���ұ߱��ʽ��ֵ��
			���ʽ2��
				ѭ���������ʽ���ж��Ƿ����ѭ����
				��ÿ��ִ��ѭ����ǰִ�У�
			���ʽ3��
				��Ϊѭ���ĵ���������������
			�������ʽ������ʡ�ԣ�
				���ʽ2ʡ�ԣ���ʾ������ԶΪ�棻
				���ʽ1���Էŵ�forѭ��ǰ��
				���ʽ3���Էŵ�forѭ�����ڣ�
				���������
					for (;;) printf("xxxxx")
					�ȼ��ڣ�
					while(1) printf("xxxx")

		�ı�ѭ����ִ��״̬��
			break���
			continue���



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
	// ����
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