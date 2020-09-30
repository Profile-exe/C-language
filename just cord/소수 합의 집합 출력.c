#include <stdio.h>
#include <stdbool.h>

bool prime[100];

int checkPrime(int n) {
	if (!(prime[n])) return 1;
	else return 0;
}

int main(void)
{
	int i, j = 2, k = 0, n, m, mul;
	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		mul = 2;
		while ((i * mul <= n) && (prime[i] == false)) {
			prime[i * mul] = true;
			mul++;
		}
	}

	for (i = 2; i <= n / 2; i++) {
		if (checkPrime(i) && checkPrime(n - i))
			printf("%d = %d + %d\n", n, i, n - i);
	}

	return 0;
}