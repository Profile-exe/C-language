#include <stdio.h>
#include <math.h>

void Z(int n, int r, int c);
int count = 0;

int main(void)
{
	int n, r, c;

	scanf_s("%d %d %d", &n, &r, &c);
	Z(n, r, c);
	printf("%d", count);
	
	return 0;
}

void Z(int n, int r, int c)
{
	int i, j, Fx, Fy, x = 0, y = 0;

	if (n < 1 || n > 15) return;
	else if (n == 1) {
		for (i = y; i < y + 2; i = y) {
			for (j = x; j < x + 2; j = x) {
				if (r == x && c == y) return count;
				if (i != 0 && j != 0) {
					x++;
					count++;
				}
			}
			y++;
			count++;
		}
	}
	else {
		for (i = 0; i < 2 * n; i = pow(2, (double)n - 1)) {
			for (j = 0; j < 2 * n; j = pow(2, (double)n - 1)) {




				if (r == x && c == y) break;
			}





			if (r == x && c == y) break;
		}
	}
	

	Z(n - 1, r, c);
}