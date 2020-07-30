#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932

int main(void)
{
	double r;

	scanf("%lf", &r);
	printf("%f\n", PI * pow(r,2));
	printf("%f\n", 2 * pow(r, 2));

	return 0;
}