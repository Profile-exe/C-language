#include <stdio.h>

int main(int argc, char* argv[])
{
	// Declaring and defining an array of billing results for the whole case
	double aRate[10] = {
		0.0, 0.1, 0.25,		// age 1~3
		0.5, 0.5,			// age 4~5
		0.6, 0.65,			// age 6~7
		0.8, 0.82, 0.97		// age 8~10
	};
	int nAge = 0, i = 0, nFee = 1000;

	// Prints out the fare list
	printf("요금표\n");
	for (i = 1; i <= 10; i++)
		printf("%d세 요금 :\t%d원\n", i, (int)(nFee * aRate[i - 1]));
	putchar('\n');

	// Recieve an age input and adjust the values within the index range by force
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);
	if (nAge < 1)		nAge = 1;
	else if (nAge > 10) nAge = 10;

	printf("최종요금 : %d원\n", (int)(nFee * aRate[nAge - 1]));	// zero-based index => index - 1
	putchar('\n');
	return 0;
}