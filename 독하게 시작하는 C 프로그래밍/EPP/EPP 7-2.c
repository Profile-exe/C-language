#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	while (i <= 4) {
		j = 0;
		while (j <= 4) {
			printf("*\t");
			++j;
		}
		putchar('\n');
		++i;
	}
	return 0;
}