#include <stdio.h>

int main(void)
{
	int i, j, k;
	int a[4][3], b[3][4], c[4][4];

	puts("a�� �� ��� ���� �Է��Ͻÿ�");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	puts("b�� �� ��� ���� �Է��Ͻÿ�");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (k = 0; k < 3; k++)			// i���� k�� ��� * j���� k�� ���
				c[i][j] += a[i][k] * b[k][j];
		}
	}

	return 0;
}