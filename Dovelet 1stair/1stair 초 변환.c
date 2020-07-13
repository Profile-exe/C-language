#include <stdio.h>

int main(void)
{
	
	int time, hour, min, sec, day;

	scanf("%d", &time);

	day = time / 86400;
	hour = (time - day * 86400) / 3600;
	min = (time - day * 86400 - hour * 3600) / 60;
	sec = (time - day * 86400 - hour * 3600 - 60*min);

	printf("%d %d %d %d", day, hour, min, sec);
	
	return 0;
}