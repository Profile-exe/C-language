#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char number[16] = { 0 };
	int location[16] = { 0 };
	int i, time = 0;
	

	scanf("%s", number);
	for (i = 0; number[i] != '\0'; i++) {
		if (number[i] >= 'W') location[i] = 9;
		else if (number[i] >= 'T') location[i] = 8;
		else if (number[i] >= 'P') location[i] = 7;
		else if (number[i] >= 'M') location[i] = 6;
		else if (number[i] >= 'J') location[i] = 5;
		else if (number[i] >= 'G') location[i] = 4;
		else if (number[i] >= 'D') location[i] = 3;
		else location[i] = 2;
	}
	for (i = 0; i < 16; i++) {
		switch (location[i]) {
			case 2:
				time += 3;
				break;
			case 3:
				time += 4;
				break;
			case 4:
				time += 5;
				break;
			case 5:
				time += 6;
				break;
			case 6:
				time += 7;
				break;
			case 7:
				time += 8;
				break;
			case 8:
				time += 9;
				break;
			case 9:
				time += 10;
				break;
		}
	}
	
	printf("%d", time);

	return 0;
}