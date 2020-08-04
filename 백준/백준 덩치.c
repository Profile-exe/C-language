#include <stdio.h>

typedef struct person {
	int w;
	int h;
	int rank;
} W_H;

int main(void)
{
	int n, i, j;
	W_H student[50];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &student[i].w, &student[i].h);
		student[i].rank = 1;
	}

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (student[i].w < student[j].w && student[i].h < student[j].h)	student[i].rank++;
			else if (student[i].w > student[j].w && student[i].h > student[j].h) student[j].rank++;
		}
	}

	for (i = 0; i < n; i++)
		printf("%d ", student[i].rank);

	return 0;
}
