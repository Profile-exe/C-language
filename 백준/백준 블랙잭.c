#include <stdio.h>

int bj(int n, int m);
int list[100] = { 0, };

int main(void)
{
	int n, m, i, j, k, result; 

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) scanf("%d", &list[i]);

	printf("%d\n", bj(n, m));
	return 0;
}

int bj(int n, int m)
{
	int i, j, k, before = 0, initial = 1;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			for (k = 0; k < n; k++) {
				if (i != j && i != k && j != k && list[i] + list[j] + list[k] <= m && list[i] + list[j] + list[k] >= before) {
					initial = list[i] + list[j] + list[k];
					before = initial;
					if (initial == m) return initial;
				}
			}
		}
	}
	return initial;
}