#include <stdio.h>

int main(void)
{
	int max = 0, input = 0;

	scanf_s("%d", &input);
	max = input;

	scanf_s("%d", &input);
	max = input > max ? input : max;
	
	scanf_s("%d", &input);
	max = input > max ? input : max;

	printf("MAX : %d\n", max);
	return 0;
}