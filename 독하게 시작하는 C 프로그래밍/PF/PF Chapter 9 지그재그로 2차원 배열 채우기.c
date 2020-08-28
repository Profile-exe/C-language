#include <stdio.h>

int main(void)
{
	int arr[5][5] = { 0, };
	int i, j, count = 0;

	for (i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < 5; j++)
				arr[i][j] = ++count;
		}
		else {
			for (j = 4; j >= 0; j--)	//for (j = 0; j < 5; j++)
				arr[i][j] = ++count;	//    arr[i][4-j] = ++count;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);
		putchar('\n');
	}

	return 0;
}