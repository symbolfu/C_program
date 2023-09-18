#define _CRT_SECURE_NO_WARNINGS 1

/*
	part_2: �㷨 algorithm
		���� = �㷨 + ���ݽṹ
		���ݽṹ��
			�����ݵ������� �������Ķ���
		�㷨��
			�Բ�������������β�������

		����ʵ�֣�
			1���㷨
			2�����ݽṹ
			3��������Ʒ���
			4�����Թ���
				���Թ���Ӧ����ָʵ��1-3�����壬�����ĳһ�����԰�
				Ҳ����˵��1-3�Ƕ��������������֪ʶ��

		���ֻ����ṹ
			1��˳��ṹ
			2��ѡ��ṹ
			3��ѭ���ṹ

		���㷨��˼ʱ��ʹ��α���루pseudo code���ܹ����Ч�����׶���

*/


#include <stdio.h>

void test01(int n)
{
	// ����n��
	int i, t;
	t = 1;
	i = 2;

	while (i<= n)
	{
		t = t * i;
		i = i + 1;
	}

	printf("%d! is %d\n", n, t);
}

void test02()
{
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;

	while (deno <= 100)
	{
		sign = -sign;
		term = sign / deno;
		sum = sum + term;
		deno = deno + 1;
	}

	printf("the value is %f\n", deno);
}



int main()
{
	test01(5);
	test02();


	return 0;
}



/*
	�ṹ����̵�˼·��
		1���Զ�����
		2����ϸ��
		3��ģ�黯��ƣ�
			ģ��Ķ����ԣ�һ��ģ�����һ��ܣ������ԽСԽ�ã�
		4���ṹ�����룻
			ʹ�û���������������Ѿ���ƺƵĹ���ģ����㷨
	
*/

