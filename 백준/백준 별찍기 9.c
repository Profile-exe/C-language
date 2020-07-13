#include <stdio.h>

int main(void)
{
	int n, i, j, k = 1;

	scanf("%d", &n);

	for (i = 0; i < 2 * n - 1; i++) {
		if (i < n) {
			for (j = n; j > n - i; j--)
				printf(" ");			
			for (j = 0; j < 2 * n - 1 - 2 * i; j++)
				printf("*");
		}
		else if (i >= n) {
			for (j = 0; j < 2 * n - 2 - i; j++)
				printf(" ");
			for (j = 2 * n - 1; j > 2 * n - 2 * i + 2 * (n - 2); j--) {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}