#include <stdio.h>

char arr[1000000] = { 0 };

int main(void)
{
	int max, index = 0, tmp, i, j;
	int count[26] = { 0 };
	int alphabet[26] = { 0 };
	scanf("%s", arr);

	for (i = 0; arr[i] != '\0'; i++) {
		if (arr[i] >= 'a' && (arr[i] - 'a') >= 0)
			count[arr[i] - 'a']++;
		else if (arr[i] >= 'A' && (arr[i] - 'A') >= 0)
			count[arr[i] - 'A']++;
	}

	max = count[0];
	for (i = 0; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			index = i;
		}
	}

	for (i = 0; i < 26; i++) {
		if (max == count[i] && index != i) {
			printf("?");
			index = '?';
			break;
		}
	}
	
	if (index != '?')
		printf("%c", index + 'A');

	return 0;
}