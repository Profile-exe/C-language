#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0, };
	int x = 5, y = 0, nCounter = 0;						// change primary index of x
	int i, j, nLength = 9, nDiretion = -1;

	for (nLength = 9; nLength > 0; nLength -= 2) {
		for (i = 0; i < nLength; i++) {
			if (i < nLength / 2 + 1) x += nDiretion;
			else					 y -= nDiretion;	// change += to -=
			aList[y][x] = ++nCounter;					// moving of column is first -> [y][x]
		}
		nDiretion = -nDiretion;
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;	
}