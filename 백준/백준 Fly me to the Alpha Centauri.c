#include <stdio.h>

int main(void)
{
	long long x, y, distance, boundary, t, i, j, k;

	scanf("%lld", &t);
	for (i = 0; i < t; i++) {
		scanf("%lld %lld", &x, &y);
		distance = y - x;
		boundary = 0;
		for (j = 1; boundary < distance; j++) {
			boundary += j * 2;
		}
		if (distance <= boundary - j + 1) {
			printf("%lld\n", 2 * (j - 1) - 1);
			continue;
		}
		else {
			printf("%lld\n", (j - 1) * 2);
			continue;
		}
	}

	return 0;
}