#include <stdio.h>

int main(void)
{
	int a, b, c, i, j, tmp;
	int list[3] = { 0 };

	scanf("%d %d %d", &a, &b, &c);

	if ((a >= b) && (b >= c) || (c >= b) && (b >= a))
		printf("%d", b);
	else if ((b >= a) && (a >= c) || (c >= a) && (a >= b))
		printf("%d", a);
	else
		printf("%d", c);

	return 0;
}