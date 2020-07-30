#include <stdio.h>
#include <math.h>

int main(void)
{
	int tri[3] = { 0, }, sum = 0, max;

	while (1) {
		scanf("%d %d %d", &tri[0], &tri[1], &tri[2]);
		sum = tri[0] + tri[1] + tri[2];
		if (sum == 0) break;
		max = (tri[0] >= tri[1] && tri[0] >= tri[2]) ? tri[0] : ((tri[1] >= tri[0] && tri[1] >= tri[2]) ? tri[1] : tri[2]);
		if (max == tri[0]) {
			if (max == sqrt(pow(tri[1], 2) + pow(tri[2], 2))) printf("right\n");
			else printf("wrong\n");
		}
		if (max == tri[1]) {
			if (max == sqrt(pow(tri[0], 2) + pow(tri[2], 2))) printf("right\n");
			else printf("wrong\n");
		}
		if (max == tri[2]) {
			if (max == sqrt(pow(tri[0], 2) + pow(tri[1], 2))) printf("right\n");
			else printf("wrong\n");
		}
	}

	return 0;
}