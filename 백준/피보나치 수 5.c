#include <stdio.h>
int get_fibo(int n);

int main(void)
{
	int n;
	scanf("%d", &n);

	printf("%d", get_fibo(n));
	return 0;
}

int get_fibo(int n)
{
	int fibo[20] = { 0, };
	int i, result = 0;

	if (n == 0) return 0;
	fibo[0] = 0;
	fibo[1] = 1;
	for (i = 2; i <= n; i++)
		fibo[i] = fibo[i - 2] + fibo[i - 1];

	return fibo[i - 1];
}