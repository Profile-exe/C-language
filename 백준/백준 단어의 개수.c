#include  <stdio.h>

char arr[1000000] = { 0 };


int main(void)
{
	int i, count = 0;
	gets(arr);

	if (arr[0] != ' ') count++;
	for (i = 0; arr[i] != '\0'; i++) {
		if (arr[i + 1] == '\0') break;
		if (arr[i] == ' ' && arr[i + 1] != ' ')
			count++;
	}

	printf("%d", count);

	return 0;
}