#include <stdio.h>

int GetResult(void)
{
	int nResult = 0;
	printf("����(0~100)�� �Է��ϼ��� : ");
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
		puts("ERROR : 0~100������ ������ �Է��ϼ���");
		return 0;
	}
	printf("����� ������ '%c'(%d)�Դϴ�.\n", GetGrade(nResult), nResult);
	return 0;
}