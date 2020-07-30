#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
	double r;

	scanf("%lf", &r);
	printf("%f\n", M_PI * pow(r, 2));
	printf("%f\n", 2 * pow(r, 2));

	return 0;
}