#include <stdio.h>

int main(void)
{
	int i, count = 0;
	int number[10] = { 0 };
	int arr[42] = { 0 };

	for (i = 0; i < 10; i++) {
		scanf("%d", &number[i]);
		number[i] %= 42;
		arr[number[i]]++;
		if (arr[number[i]] == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}