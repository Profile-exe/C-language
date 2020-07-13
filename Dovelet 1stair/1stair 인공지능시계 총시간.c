#include <stdio.h>

int main(void)
{

	int hour, min, sec, need, time;

	scanf("%d %d %d", &hour, &min, &sec);
	scanf("%d", &need);

	time = 3600 * hour + 60 * min + sec + need;

	hour = time / 3600;
	if (hour >= 24)
		hour %= 24;
	min = (time % 3600) / 60;
	if (min >= 60) {
		hour += 1;
		if (hour >= 24)
			hour %= 24;
		min %= 60;
	}
	sec = time % 3600 % 60;
	if (sec >= 60) {
		min += 1;
		if (min >= 60) {
			hour += 1;
			if (hour >= 24)
				hour %= 24;
			min %= 60;
		}
		sec %= 60;
	}

	printf("%d %d %d", hour, min, sec);

	return 0;
}