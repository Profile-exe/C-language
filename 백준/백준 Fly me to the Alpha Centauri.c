#include <stdio.h>

int main(void)
{
	long long x, y, distance, boundary, t, i, j;

	scanf("%lld", &t);
	for (i = 0; i < t; i++) {
		scanf("%lld %lld", &x, &y);
		distance = y - x;
		boundary = 0;
		for (j = 1; boundary < distance; j++)
			boundary += j * 2;
		if (distance <= boundary - j + 1) {    // for문은 증감연산자 후 조건문 이므로 원하는 값은 for문 종료 후 j - 1이다.
			printf("%lld\n", 2 * (j - 1) - 1); // 여기도 else도 마찬가지
			continue;
		}
		else {
			printf("%lld\n", (j - 1) * 2);
			continue;
		}
	}
	return 0;
}