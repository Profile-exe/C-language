#include <stdio.h>

int main(void)
{
	int height;

	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &height);

	printf("��� : %s\n", height >= 150 ? "�հ�" : "���հ�");

	return 0;
}