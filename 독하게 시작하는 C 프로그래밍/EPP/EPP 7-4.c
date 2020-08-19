#include <stdio.h>

int  main(void)
{
	int n, i = 1;

	scanf_s("%d", &n);
	if (n < 2 || n > 9) printf("ERROR");
	else {
		while (i <= 9) {
			printf("%d * %d = %d\n", n, i, n * i);
			++i;
		}
	}
}