#include <stdio.h>

int sum(int n);

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("%d", sum(n));

	return 0;
}

int sum(int n)
{
	int div, min = 0, result = n;
	for (int i = 0; i < 55; i++) {
		if (result + result / 1000000 + (result%1000000) / 100000 + (result%100000) / 10000 + (result%10000) / 1000 + (result%1000) / 100 + (result%100) / 10 + result % 10 == n)
			min = result;
		result--;
	}
	return min;
}