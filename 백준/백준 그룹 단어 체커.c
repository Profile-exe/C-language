#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i, j;
	char string[101][101] = { 0, };
	int count = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", string[i]);
		
	for (i = 0; i < n; i++) {
		int abc[27] = { 0 };
		for (j = 0; string[i][j] != '\0'; j++) {
			if (j >= 1) {
				if (string[i][j - 1] != string[i][j]) {
					if (abc[string[i][j] - 'a'] != 0) {
						count -= 1;
						break;
					}
				}
			}
			abc[string[i][j] - 'a']++;			
		}
		count++;
	}

	printf("%d", count);
	return 0;
}