#include <stdio.h>
#include <stdbool.h>

bool primeN[1000001] = { 0, };

int main(void)
{
	int m, n, i, mul;

	scanf("%d %d", &m, &n);
	primeN[1] = true;
	for (i = 2; i <= n; i++) {
		mul = 2;
		while ((i * mul <= n) && (primeN[i] == false)) {
			primeN[i * mul] = true;
			mul++;
		}
	}
	for (i = m; i <= n; i++) {
		if (!(primeN[i])) printf("%d\n", i);
	}

	return 0;
}