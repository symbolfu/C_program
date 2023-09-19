#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


void test01()
{
	// œ∞Ã‚1
	float p, r = 0.07;
	int n = 10;

	p = pow(1 + r, n);

	printf("the rate of growth is %f\n", p);

}





int main()
{
	test01();

	return 0;
}
