#include <stdio.h>

int main(void)
{
	int time, hour, min, sec;

	printf("�ð�(��)�� �Է��Ͻÿ� : ");
	scanf_s("%d", &time);

	hour = time / 3600;
	min = (time % 3600) / 60;
	sec = time % 3600 % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", time, hour, min, sec);

	return 0;
}