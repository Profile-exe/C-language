#include <stdio.h>

int main(void)
{
	
	int hour, min, sec, need, time;

	scanf("%d %d %d", &hour, &min, &sec);
	scanf("%d", &need);

	hour += need / 3600;
	if (hour >= 24)
		hour %= 24;
	min += (need % 3600) / 60;
	if (min >= 60) {
		hour += min/60;
		if (hour >= 24)
			hour %= 24;
		min %= 60;
	}
	sec += (need % 3600) % 60;
	if (sec >= 60) {
		min += sec/60;
		if (min >= 60) {
			hour += min / 60;
			if (hour >= 24)
				hour %= 24;
			min %= 60;
		}
		sec %= 60;
	}

	printf("%d %d %d", hour, min, sec);

	return 0;
}