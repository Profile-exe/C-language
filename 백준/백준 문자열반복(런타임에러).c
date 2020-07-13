#include <stdio.h>
#include <string.h>

int main(void)
{
	int T, R;
	char S[20] = { 0 };
	
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		char P[60] = { 0 };
		scanf("%d %s", &R, S);
		for (int j = 0; j < strlen(S); j++) {
			for (int k = 0; k < R; k++) {
				P[k + R * j] = S[j];
			}
		}
		printf("%s\n", P);
	}
	return 0;
}