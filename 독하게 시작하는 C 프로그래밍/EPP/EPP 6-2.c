#include <stdio.h>

int main(void)
{
	int age;
	double fee = 1000;

	scanf_s("%d", &age);
	if (age < 20) fee *= 0.75;

	printf("������� : %.0f��", fee);
	return 0;
}