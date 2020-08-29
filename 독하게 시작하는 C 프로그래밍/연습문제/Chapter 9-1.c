#include <stdio.h>

int main(void)
{
	int arr[5][5] = { 0, };
	int i, j, count = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i % 2 == 0)
				arr[j][i] = ++count;
			else
				arr[4 - j][i] = ++count;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);
		putchar('\n');
	}
	return 0;
}