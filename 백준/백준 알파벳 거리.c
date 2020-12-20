#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, dist[100][21];
	char arr[100][2][21] = { 0, };

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s %s", arr[i][0], arr[i][1]);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < strlen(arr[i][0]); j++) {
			if (arr[i][0][j] <= arr[i][1][j])
				dist[i][j] = arr[i][1][j] - arr[i][0][j];
			else
				dist[i][j] = arr[i][1][j] - arr[i][0][j] + 26;
		}
	}
		
	for (int i = 0; i < n; i++) {
		printf("Distances: ");
		for (int j = 0; j < strlen(arr[i][0]); j++)
			printf("%d ", dist[i][j]);
		putchar('\n');
	}

	return 0;
}