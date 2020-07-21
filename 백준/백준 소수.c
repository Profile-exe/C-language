#include <stdio.h>

int main(void)
{
	int m, n, arr[10001] = { 0, 0, 2, };
	int i, j, min = 0, count = 0, sum = 0;

	scanf("%d\n%d", &m, &n);

	for (i = 1; i < 4999; i++)
		arr[2 * i + 1] = 2 * i + 1;

	for (i = 1; i < 4999; i++) {
		for (j = 1; j < 4999; j++) {
			if (arr[2 * j + 1] % (2 * i + 1) == 0 && arr[2 * j + 1] != 2 * i + 1)
				arr[2 * j + 1] = 0;
		}
	}

	for (i = m; i <= n; i++) {
		if (count == 0 && arr[i] != 0) {
			min = arr[i];
			count++;
		}
		sum += arr[i];
	}
		
	if (min == 0) printf("-1");
	else printf("%d\n%d\n", sum, min);

	return 0;
}