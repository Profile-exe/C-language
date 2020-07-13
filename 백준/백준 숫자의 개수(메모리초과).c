#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int a, b, c, i, j, mul, div, index, * arr;
	int count[10] = { 0 };

	scanf("%d %d %d", &a, &b, &c);
	mul = div = a * b * c;
	arr = (int*)malloc(sizeof(int) * mul);
	
	for (i = 0; i < a * b * c; i++) {
		if (i == 0)
			arr[i] = mul % 10;
		else {
			div /= 10;
			arr[i] = div % 10;
		}
		if (div == 0) {
			index = i;
			break;
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < index; j++) {
			if (i == arr[j])
				count[i]++;
		}
		printf("%d\n", count[i]);
	}

	free(arr);
	return 0;
}