#include <stdio.h>

int GetResult(void)
{
	int nResult = 0;
	printf("성적(0~100)을 입력하세요 : ");
	scanf_s("%d", &nResult);
	if (nResult > 100 || nResult < 0) return 0;
	return nResult;
}

char GetGrade(int nScore)
{
	if (nScore >= 90) return 'A';
	else if (nScore >= 80) return 'B';
	else if (nScore >= 70) return 'C';
	else if (nScore >= 60) return 'D';

	return 'F';
}

int main(void)
{
	int nResult = 0;

	nResult = GetResult();
	if (nResult == 0) {
		puts("ERROR : 0~100사이의 정수를 입력하세요");
		return 0;
	}
	printf("당신의 학점은 '%c'(%d)입니다.\n", GetGrade(nResult), nResult);
	return 0;
}