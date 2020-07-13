#include <stdio.h>

int find_index(int x);
int arr[9] = { 0 };

int main(void)
{	
	int i, n, max;

	for (i = 0; i < 9; i++)
		scanf("%d", &arr[i]);

	max = arr[0];
	for (i = 0; i < 8; i++) {
		if (max < arr[i + 1])
			max = arr[i + 1];
	}

	printf("%d\n%d", max, find_index(max));
	return 0;
}

int find_index(int x) {
	int i;
	for (i = 0; i < 9; i++) {
		if (x == arr[i])
			break;
	}
	return i + 1;
}