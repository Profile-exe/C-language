#include <stdio.h>

int main(void)
{
	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < 2*n - 1; i++) {
		if (i < n)
			for (j = n; j >= n - i; j--)
				printf("*");
		else if (i >= n)
			for (j = 2*n - 2; j >= i; j--)
				printf("*");
		printf("\n");
	}

	return 0;
}