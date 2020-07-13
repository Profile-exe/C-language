#include <stdio.h>

int main(void)
{
	int n, first, second, rest;

	scanf("%d", &n);

	first = n / 4;
	second = first / 4;
	rest = n % 4 + first % 4;

	printf("%d %d", n + first + second, rest);

	return 0;
}