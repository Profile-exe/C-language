#include <stdio.h>

int main(void)
{
	int time, hour, min, sec;

	printf("시간(초)를 입력하시오 : ");
	scanf_s("%d", &time);

	hour = time / 3600;
	min = (time % 3600) / 60;
	sec = time % 3600 % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", time, hour, min, sec);

	return 0;
}