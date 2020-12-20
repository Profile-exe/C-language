#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int idx = 0;
	int* loc = (int*)malloc(26 * sizeof(int));
	char str[100];
	scanf("%s", str);
	memset(loc, -1, 26 * sizeof(int));
	for (int i = 0; i < strlen(str); i++)
		if (loc[str[i] - 'a'] == -1) loc[str[i] - 'a'] = i;
	for (int i = 0; i < 26; i++) printf("%d ", loc[i]);
	return 0;
}