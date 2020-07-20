#include <stdio.h>
int get_p(int k, int n);

int apt[15][15] = { 0, };

int main(void)
{
	int t, k, n;
	int i, j;

	scanf("%d", &t);
	for (i = 0; i < 15; i++) {
		apt[0][i] = i;
		apt[i][0] = 1;
	}

	for (i = 0; i < t; i++) {
		scanf("%d\n%d", &k, &n);
		printf("%d\n", get_p(k, n));
		while (getchar() != '\n');
	}

	return 0;
}

int get_p(int k, int n) {
	int sum = 0;

	if (k == 0) return n;
	else if (apt[k][n] != 0) return apt[k][n];
	else {
		for (int i = 1; i <= n; i++)
			apt[k][n] += get_p(k - 1, i);
		return apt[k][n];
	}
}