#include <stdio.h>
#define NUMBER 80

int main(void)
{
	int i, j;
	int num;					// �л� ��
	int score[NUMBER];			// �л� ����
	int dist[11] = { 0, };		// ���� ����
	int dist_max = 0;			// ������ �ִ�

	printf("�л� ���� �Է����ּ��� : ");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("1~%d ���̷� �Է����ּ���.", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d���� ������ �Է����ּ���\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d�� : ", i + 1);
		do {
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
				printf("1~100 ���̷� �Է��ϼ���.");
		} while (score[i] < 0 || score[i] > 100);
		dist[score[i] / 10]++;			// �� ������ �ش��ϴ� ���� ����
	}

	puts("\n--- ���� �׷��� ---");		// puts()�� �ڵ�����('\n')

	for (i = 0; i <= 10; i++)			// ������ �ִ� ���ϱ�
		if (dist[i] > dist_max) dist_max = dist[i];

	for (i = dist_max; i >= 1; i--) {	// ���̸� ���߱� ���� ū �������� ���ʴ�� ���(ex : ���� �ִ� 3�̸� ������ 3�� ��޺��� ���)
		for (j = 0; j <= 10; j++) {		// 0~100������ ��޸��� �� ���
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