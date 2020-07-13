#include <stdio.h>
#include <math.h>

int main(void)
{
	double price, cash, cmp, result;

	scanf("%lf %lf", &price, &cash);
	cash = pow(10, cash);

	cmp = (int)price / (int)cash * cash;
	result = (cmp + cmp + cash) / 2.0;

	if (price >= result)
		price = cmp + cash;
	else
		price = cmp;

	printf("%.0f", price);


	return 0;
}