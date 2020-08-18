#include <stdio.h>

int main(void)
{
	int n;
	scanf_s("%d", &n);
	if (n < 1) n = 1;
	if (n > 9) n = 9;

	while (n-- > 0) {
		printf("*");
	}
	printf("\n");

	return 0;
}