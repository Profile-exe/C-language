#include <stdio.h>

int main(void)
{
	int fee = 1000, age = 0;
	double rate = 0.0;

	scanf_s("%d", &age);
	if (age >= 65)		rate = 0.0;
	else if (age >= 20) rate = 1.0;
	else if (age >= 14) rate = 0.75;
	else if (age >= 4)	rate = 0.5;
	else				rate = 0.0;

	printf("������� : %d��\n", (int)(fee * rate));
	return 0;
}