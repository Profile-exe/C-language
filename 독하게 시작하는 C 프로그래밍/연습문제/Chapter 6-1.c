#include <stdio.h>

int main(void)
{
	int n, max = 0;

	scanf_s("%d", &n);
	if (n < 0)		n = 0;
	if (n > 100)	n = 100;
	if (max < n)	max = n;

	scanf_s("%d", &n);
	if (n < 0)		n = 0;
	if (n > 100)	n = 100;
	if (max < n)	max = n;

	scanf_s("%d", &n);
	if (n < 0)		n = 0;
	if (n > 100)	n = 100;
	if (max < n)	max = n;

	scanf_s("%d", &n);
	if (n < 0)		n = 0;
	if (n > 100)	n = 100;
	if (max < n)	max = n;

	scanf_s("%d", &n);
	if (n < 0)		n = 0;
	if (n > 100)	n = 100;
	if (max < n)	max = n;

	printf("%d\n", max);
	return 0;
}