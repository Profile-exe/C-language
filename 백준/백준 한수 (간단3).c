#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, digit = 1, count = 0;
	scanf("%d", &n);

	if (n < 100) {	// 100 미만의 수는 모두 등차수열을 이룬다.
		printf("%d\n", n);
		return 0;
	}
	else {			// 1000은 한수가 아니다. -> 100이상 1000미만의 수만 판별하면 됨
		for (int i = n; i >= 100; i--)
			if ((i / 100) - (i % 100 / 10) == (i % 100 / 10) - i % 10) count++;
		printf("%d\n", count + 99);	// 100 미만의 모든 등차수열의 수(99)를 더해준다.
		return 0;
	}
	return 0;
}