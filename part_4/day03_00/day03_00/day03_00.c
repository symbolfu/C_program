#define _CRT_SECURE_NO_WARNINGS 1

/*
	ѡ��ṹ������ƣ�
		 C�����ṩ������ѡ����䣺
			if���
			switch���

		if���һ����ʽ��
			if (���ʽ)
				���1
			else if
				���2
			else
				���3

			���ʽ�����ǣ�
				��ϵ���ʽ
				�߼����ʽ
				��ֵ���ʽ

			��ϵ���ʽ��
				��c�����У����бȽϷ��ı��ʽ��
				== �� ��=�����ȼ��������ȽϷ��ͣ�

			�߼���������߼����ʽ��
				�߼��������
					&&
					||
					��
				���߼����������ϵ�������������ʽ����������ʽ�Ӿ����߼����ʽ��
				���ȼ���
					�� > && > ||
				ע�⣺�߼����ʽ��code����һ�����ɵģ�������߳����Ч�ʣ�����&&������ж�Ϊ��ʱ���Ҳ�Ͳ��������
				˼��������ʽ����٣���m=1>2��&& (n=4>3)

			������������������ʽ��
				��������������ͣ�   Ψһ����Ŀ�����
					��ʵ����⣺�������ʽΪif�ļ��д��
				�������ʽ��
					���ʽ1 �� ���ʽ2 �����ʽ3


		switch��䣺
			���֧ѡ����䣻
			��if�����̫�࣬�����߳����ҿɶ��Խ��ͣ�
			switch���һ����ʽ��
				switch(���ʽ)
				{
					case ����1: ���1
					case ����2: ���2
					case ����3: ���3
					default: ���4
				}

				���ʽ��ֵ������Ӧ������������
				ע�⣺case���ֻ���ǵ����á�ִ��switch���ʱ������switch���ʽ��ֵ�ҵ�ƥ�����ڱ�ţ����ڴ˴�������������飬
					��ִ����һ��case��Ǻ�������󣬾ʹӴ˱�Ǵ���������ִ�У����Գ���ÿ��case��󶼻����һ��break��
				code���
					case�Ӿ�����������ʱ�����Բ���{}������������case������Ծ����ģ���ȻҲ�ǿ�����ӵģ�
					����һ��ִ�����ʱ��
						case 'A':
						case 'B':
						case 'C': XXXXX
				�ڳ����У�������switch������˵��������


*/

#include <stdio.h>
#include <math.h>


void test01()
{
	double a, b, c, disc, x1, x2, p, q;

	scanf("%lf%lf%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;

	if (disc < 0)
		printf("the question hasn't real roots\n");
	else
	{
		p = -b / (2.0 * a);
		q = sqrt(disc) / (2.0 * a);
		x1 = p + q;
		x2 = p - q;

		printf("real roots:\nx1=%7.2f\nx2=%7.2f\n", x1, x2);
	}
}

void test02()
{
	float a, b, t;

	scanf("%f,%f", &a, &b);

	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	printf("%5.2f,%5.2f", a, b);
}


void test03()
{
	char ch;

	scanf("%c", &ch);

	ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
	printf("%c\n", ch);
}

void test04()
{
	char grade;

	scanf("%c", &grade);
	printf("your score:");
	switch (grade)
	{
	case 'A': printf("80~100\n"); break;
	case 'B': printf("70~79\n"); break;
	case 'C': printf("60~69\n"); break;
	case 'D': printf("<60\n"); break;
	default: printf("enter data error!\n");
		
	}
}


void test05()
{
	int year, leap;
	printf("enter year:");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				leap = 1;
			}
			else
			{
				leap = 0;
			}
		}
		else
		{
			leap = 1;
		}
	}
	else
	{
		leap = 0;
	}

	if (leap)
	{
		printf("%d is ", year);
	}
	else
	{
		printf("%d is not ", year);
	}
	printf("a leap year.\n");

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