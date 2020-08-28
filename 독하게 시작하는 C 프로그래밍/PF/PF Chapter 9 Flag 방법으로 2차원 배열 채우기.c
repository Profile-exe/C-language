#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0, };
	int i = 0, j = 0, nCounter = 0, nFlag = 1;
	// nFlag 변수는 반복문 내부에서 매번 참/거짓으로 바뀐다.

	for (i = 0; i < 5; i++) {
		// 토글을 위한 플래그 변수
		if (nFlag) {
			for (j = 0; j < 5; j++)
				aList[i][j] = ++nCounter;
			nFlag = 0;	// 다음 반복에서 거짓인 경우가 선택되도록
		}
		else {
			// 역방향 채우기 (보수를 취하듯)
			for (j = 0; j < 5; j++)
				aList[i][4 - j] = ++nCounter;
			nFlag = 1;	// 다음 반복에서 참인 경우가 선택되도록
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;
}