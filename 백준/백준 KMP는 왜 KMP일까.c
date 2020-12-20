#include <stdio.h>
#include <string.h>

int main(void)
{
	int idx = 0;
	char arr[101] = { 0, };
	char token[101][101] = { 0, };

	scanf("%s", arr);
	char* ptr = strtok(arr, "-");
	while (ptr != NULL) {
		strcpy(token[idx++], ptr);
		ptr = strtok(NULL, "-");
	}

	for (int i = 0; i < idx; i++)
		printf("%c", token[i][0]);
	return 0;
}