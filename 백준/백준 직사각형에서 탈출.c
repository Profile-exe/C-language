#include <stdio.h>

int main(void)
{
	int x, y, w, h;

	scanf("%d %d %d %d", &x, &y, &w, &h);
	if (w - x < x) x = w - x;
	if (h - y < y) y = h - y;

	printf("%d", x > y ? y : x);
	return 0;
}