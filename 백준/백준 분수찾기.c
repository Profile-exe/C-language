#include <stdio.h>

int main(void)
{
	int find, i, j, count = 0, line = 1;

	scanf("%d", &find);

	while (1) {
		if (line % 2 != 0) {
			i = line, j = 1;
			count++;
			while (i > 1) {
				if (count == find) break;
				i--;
				j++;
				count++;
			}
			if (count == find) break;
			line++;
		}
		else {
			i = 1, j = line;
			count++;
			while (j > 1) {
				if (count == find) break;
				i++;
				j--;
				count++;
			}
			if (count == find) break;
			line++;
		}
	}

	printf("%d/%d", i, j);
	return 0;
}