#include <stdio.h>

int main(void)
{
	int a, b, c, i, j, tmp;
	int list[3] = { 0 };

	scanf("%d %d %d", &a, &b, &c);

	list[0] = a;
	list[1] = b;
	list[2] = c;
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (list[j] <= list[j + 1]) {
				tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}

	printf("%d", list[1]);
	return 0;
}