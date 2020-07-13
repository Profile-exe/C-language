#include <stdio.h>

int main(void)
{
	char S[100] = { 0 };
	int abc[26] = { 0 };

	scanf("%s", S);
	for (int i = 0; S[i] != '\0'; i++) {
		if (abc[S[i] - 'a'] == 0)
			abc[S[i] - 'a'] = i + 1;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", abc[i] - 1);
	}
	return 0;
}