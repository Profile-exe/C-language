#include <stdio.h>

int main(void)
{
	int i, j, k;
	int a[4][3], b[3][4], c[4][4];

	puts("a의 각 요소 값을 입력하시오");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	puts("b의 각 요소 값을 입력하시오");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (k = 0; k < 3; k++)			// i행의 k개 요소 * j열의 k개 요소
				c[i][j] += a[i][k] * b[k][j];
		}
	}

	return 0;
}