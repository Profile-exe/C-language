#include <stdio.h>

int main(void)
{
	int A, B, max;

	scanf("%d %d", &A, &B);

	if (A % 10 > B % 10) max = A;
	else if (B % 10 > A % 10) max = B;
	else if (A / 10 % 10 > B / 10 % 10) max = A;
	else if (A / 10 % 10 < B / 10 % 10) max = B;
	else if (A / 100 > B / 100) max = A;
	else max = B;

	printf("%d%d%d", max % 10, max / 10 % 10, max / 100);

	return 0;
}