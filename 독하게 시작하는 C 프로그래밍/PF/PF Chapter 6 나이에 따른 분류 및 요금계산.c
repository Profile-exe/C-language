#include <stdio.h>

int main(void)
{
	int fee = 1000, age = 0;
	double rate = 0.0;

	scanf_s("%d", &age);
	if (age < 14) {
		if (age < 4)	rate = 0.0;
		else			rate = 0.5;
	}
	else {
		if (age < 20)	rate = 0.75;
		else			rate = 1.0;
	}

	printf("최종요금 : %d원\n", (int)(fee * rate));
	return 0;
}