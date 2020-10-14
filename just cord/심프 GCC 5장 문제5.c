#include <stdio.h>

int main() {
	int n, score[10] = { 0, }, dist[11] = { 0, };

	for (int i = 0; i < 10; i++)
		scanf("%d", &score[i]);
	scanf("%d", &n);
	for (int i = 0; i < 10; i++)
		dist[score[i] / n]++;
	puts("----------분포 그래프---------");
	if (100 % n) {		//100의 약수가 아닌 경우
		for (int i = 0; i < 100 / n; i++) {	//100점 미만
			printf("%3d~%3d : ", i * n, i * n + n - 1);
			for (int j = 0; j < dist[i]; j++)
				putchar('*');
			putchar('\n');
		}
		printf(" %d~100 : ", 100 - 100 % n);
		for (int i = 0; i < dist[100 / n]; i++)
			putchar('*');
		putchar('\n');
	}
	else {			//100의 약수인 경우
		for (int i = 0; i < 100 / n - 1; i++) {	//100점 미만
			printf("%3d~%3d : ", i * n, i * n + n - 1);
			for (int j = 0; j < dist[i]; j++)
				putchar('*');
			putchar('\n');
		}
		printf(" %d~100 : ", 100 - n);
		for (int i = 0; i < dist[100 / n - 1]; i++)
			putchar('*');
		for (int i = 0; i < dist[100 / n]; i++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}