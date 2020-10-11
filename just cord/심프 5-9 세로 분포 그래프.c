#include <stdio.h>
#define NUMBER 80

int main(void)
{
	int i, j;
	int num;					// 학생 수
	int score[NUMBER];			// 학생 점수
	int dist[11] = { 0, };		// 점수 분포
	int dist_max = 0;			// 분포의 최댓값

	printf("학생 수를 입력해주세요 : ");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("1~%d 사이로 입력해주세요.", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d명의 점수를 입력해주세요\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d번 : ", i + 1);
		do {
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
				printf("1~100 사이로 입력하세요.");
		} while (score[i] < 0 || score[i] > 100);
		dist[score[i] / 10]++;			// 각 분포에 해당하는 도수 세기
	}

	puts("\n--- 분포 그래프 ---");		// puts()는 자동개행('\n')

	for (i = 0; i <= 10; i++)			// 분포의 최댓값 구하기
		if (dist[i] > dist_max) dist_max = dist[i];

	for (i = dist_max; i >= 1; i--) {	// 높이를 맞추기 위해 큰 도수부터 차례대로 찍기(ex : 도수 최대 3이면 도수가 3인 계급부터 출력)
		for (j = 0; j <= 10; j++) {		// 0~100까지의 계급마다 별 찍기
			if (dist[j] >= i) printf(" * ");
			else			  printf("   ");
		}
		putchar('\n');
	}

	puts("----------------------------------");

	for (i = 0; i <= 10; i++)
		printf("%2d ", i * 10);
	putchar('\n');

	return 0;
}