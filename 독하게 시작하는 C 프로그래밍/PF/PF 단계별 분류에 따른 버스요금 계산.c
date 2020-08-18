#include <stdio.h>

int main(void)
{
	int age;
	double fee = 1000;

	scanf_s("%d", &age);
	if (age >= 65 || age <= 3) printf("최종요금 : %.0f원", fee * 0);
	else if (age >= 20) printf("최종요금 : %.0f원", fee);
	else if (age >= 14) printf("최종요금 : %.0f원", fee * 0.75);
	else if (age >= 4) printf("최종요금 : %.0f원", fee * 0.5);

	return 0;
}