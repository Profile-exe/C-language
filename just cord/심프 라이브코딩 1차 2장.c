#include <stdio.h>
#include <math.h>

int main(void)
{
	long a, b, integer, decimal = 0;
	scanf("%ld %ld", &a, &b);

	integer = a;
	for (int i = 0; i < b; i++) {
		decimal += (integer % 10) * pow(10, i);
		integer /= 10;
	}

	printf("%ld", integer);
	if (b)
		printf(".%ld", decimal);
	return 0;
}