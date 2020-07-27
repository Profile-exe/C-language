#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Pcount(int n);
bool arr[300000] = { 0 };

int main(void)
{
	int n;
	
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;

		printf("%d\n", Pcount(n));
		while (getchar() != '\n');
	}
	return 0;
}

int Pcount(int n)
{
	int i, mul, count = 0;
	arr[0] = arr[1] = true;
	for (int i = 2; i <= 2 * n; i++) {
		mul = 2;
		while ((i * mul <= 2 * n) && (arr[i] == false)) {
			arr[i * mul] = true;
			mul++;
		}
	}
	count = 0;
	for (i = n + 1; i <= 2 * n; i++)
		if (!(arr[i])) count++;

	return count;
}