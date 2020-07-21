#include <stdio.h>

int main(void)
{
	int n, number[100] = { 0 }, arr[1000] = { 0, 0, 2, };
	int i, j, count = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &number[i]);

	for (i = 1; i < 499; i++)
		arr[2 * i + 1] = 2 * i + 1;


	for (i = 1; i < 499; i++) {
		for (j = 1; j < 499; j++) {
			if (arr[2 * j + 1] % (2 * i + 1) == 0 && arr[2 * j + 1] != 2 * i + 1)
				arr[2 * j + 1] = 0;
		}
	}
	
	for (i = 0; number[i] != 0; i++) {
		for (j = 0; j < 1000; j++) {
			if (number[i] == arr[j]) {
				count++;
				break;
			}
			if (number[i] < arr[j]) break;
		}
	}

	printf("%d", count);
	return 0;
}