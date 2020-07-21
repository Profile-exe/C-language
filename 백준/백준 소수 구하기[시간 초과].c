#include <stdio.h>
#include <stdbool.h>

bool arr[1000001] = { true, };
void get_prime(int m, int n);

int main(void)
{
	int m, n;

	scanf("%d %d", &m, &n);

	get_prime(m, n);

	return 0;
}

void get_prime(int m, int n)
{
	int i, j, prime;
	if (m % 2 == 0) m++;
	for (i = m; i <= n; i+=2) {
		prime = 0;					// Initialization is required whenever the number changes as a variable to determine whether it is a minority or not.
		
		for (j = 1; 2 * j + 1 < i; j++) {
			if (i % (2 * j + 1) == 0 && i != (2 * j + 1)) {
				prime++;				// If not a prime number, increase the variable.
				continue;
			}
		}
		if (prime == 0) arr[i] = i;	// If it is a prime number, put a value in that index.
	}
	arr[1] = 0;
	arr[2] = 2;
	for (i = m; i <= n; i++) {
		if (arr[i] != 0) printf("%d\n", arr[i]);
	}
}