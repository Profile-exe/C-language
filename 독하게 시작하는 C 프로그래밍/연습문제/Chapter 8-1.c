#include <stdio.h>

int main(void)
{
	int arr[5] = { 0, };
	int i, max, min;

	for (i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);

	max = min = arr[0];
	for (i = 0; i < 4; i++) {
		if (max < arr[i + 1])
			max = arr[i + 1];
		if (min > arr[i + 1])
			min = arr[i + 1];
	}
	printf("MIN : %d, MAX : %d", min, max);
	return 0;
}