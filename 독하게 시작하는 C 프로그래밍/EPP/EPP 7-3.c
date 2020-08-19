#include <stdio.h>

int  main(void)
{
	int i = 1, sum = 0;

	while (i <= 10)
		sum += i++;

	printf("Total : %d\n", sum);
}