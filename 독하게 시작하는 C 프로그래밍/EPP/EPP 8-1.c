#include <stdio.h>

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0;

	for (i = 1; i < 5; i++)
		if (aList[i] > aList[0])
			aList[0] = aList[i];

	for (i = 0; i < 5; i++)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MAX: %d\n", aList[0]);
	return 0;
}