#include <stdio.h>

int main(void)
{
	int arr[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			arr[i][3] += arr[i][j];
		}
	}
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			arr[2][i] += arr[j][i];
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);
		putchar('\n');
	}
	
	return 0;
}