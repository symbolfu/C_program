#define _CRT_SECURE_NO_WARNINGS 1

/*
	����ָ��ֵ�ĺ�����
		�������ķ���ֵΪָ�룻

		���壺
			������ *���������������У�

	ָ�����飺
		�������Ԫ��Ϊָ�����ͣ�
		���壺
			������ * ������[���鳤��]

	����ָ�룺
		ָ��ָ������ݵ�ָ���������ָ��ָ���ָ�룻

	ָ��������Ϊmain�������βΣ�
		int main��int argc, char * argv[]��
		�����в���
			argc����������
			argv�� ����������
			
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