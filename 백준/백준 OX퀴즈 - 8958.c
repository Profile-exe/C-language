#include <stdio.h>

int main(void)
{
	char OX[80] = { 0 };
	int i, j, n, sum, count;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		sum = 0, count = 0;
		scanf("%s", OX);
		for (j = 0; OX[j]; j++) {
			if (OX[j] == 'O') {
				count++;
				sum += count;
				continue;
			}
			count = 0;
		}
		printf("%d\n", sum);
	}

	return 0;
}
