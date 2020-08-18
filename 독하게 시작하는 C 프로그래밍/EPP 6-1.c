#include <stdio.h>

int main(void)
{
	int a, b, c, max;

	scanf_s("%d", &a);
	max = a;

	scanf_s("%d", &b);
	if (b > max) max = b;

	scanf_s("%d", &c);
	if (c > max) max = c;

	printf("MAX : %d", max);
	return 0;
}