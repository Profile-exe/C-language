#include <stdio.h>

int main(void)
{
	int max = 0;
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);
	max = a > b ? (a > c ? a : c) : (b > c ? b : c);

	/*
	max = a;
	max = b > max ? b : max;
	max = c > max ? c : max;
	*/

	printf("MAX : %d\n", max);
	return 0;	
}