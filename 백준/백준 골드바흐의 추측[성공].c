#include <stdio.h>
#include <stdbool.h>

void Pnumber(int n);
bool arr[10001] = { 0, };

int main(void)
{
	int i, dic, inc, t, n;
	scanf("%d", &t);
	Pnumber(10000);	// 에라토스테네스의 체
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		dic = 0;
		inc = 0;
		while (arr[n / 2 - dic] != false || arr[n / 2 + inc] != false) {	// 소수가 짝수의 1/2배 지점에서 서로 대칭
			dic++;
			inc++;
		}
		printf("%d %d\n", n / 2 - dic, n / 2 + inc);
	}
	return 0;
}

void Pnumber(int n)
{
	arr[0] = arr[1] = true;
	for (int i = 2; i <= n; i++) {
		if (!arr[i]) {	// arr[i] = 0 즉 arr[i]이 지워지지 않은 수[소수]일 때
			for (int j = 2 * i; j <= n; j += i) {	// 소수 i를 기준으로 i의 배수만큼 지움
				arr[j] = true;
			}
		}
	}
}