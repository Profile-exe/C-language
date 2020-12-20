#include <stdio.h>

int main(void)
{
	int n, key, count = 0;
	scanf("%d", &n);
	key = n;
	do {
		key = (key % 10) * 10 + (key / 10 + key % 10) % 10;
		count++;
	} while (key != n);
	printf("%d\n", count);
	return 0;
}