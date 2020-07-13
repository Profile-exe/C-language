#include <stdio.h>

int main(void)
{	
	int arr[9] = { 0 };
	int i, max;
	for (i = 0; i < 9; i++)
		scanf("%d", &arr[i]);

	max = arr[0];
	for (i = 1; i < 9; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d\n", max);

	for (i = 0; i < 9; i++) {
		if (max == arr[i]) {
			printf("%d", i + 1);
			break;
		}
	}
	return 0;
}