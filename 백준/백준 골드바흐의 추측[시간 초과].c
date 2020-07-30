#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Pnumber(int n);
bool arr[10001] = { 0 };
int Pn[5000] = { 0 };

int main(void)
{
	int i, j, k, s, t, n, count;
	scanf("%d", &t);
	Pnumber(10000);						// 소수만 저장
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		count = 0;
		for (j = 0; j < n / 2; j++) {
			if (2 * Pn[j] <= n && n <= 2 * Pn[j + 1]) {
				for (k = j + 1; k > 0; k--) {
					for (s = j + 1; s > 0; s--) {
						if (n == Pn[s] + Pn[k]) {
							printf("%d %d\n", Pn[s], Pn[k]);
							count++;
							break;
						}
					}
					if (count != 0) break;
				}
				if (count != 0) break;
			}
			if (count != 0) break;
		}
	}

	return 0;
}

void Pnumber(int n)
{
	int mul, count = 0, k = 0;
	arr[0] = arr[1] = true;
	for (int i = 2; i <= n; i++) {
		if (!arr[i]) {
			for (int j = 2 * i; j <= n; j += i) {
				arr[j] = true;
			}
		}
		if (arr[i] == false) {
			Pn[k] = i;
			k++;
		}
	}
}