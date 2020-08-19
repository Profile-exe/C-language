#include <stdio.h>

typedef struct point {
	int x;
	char name[14];
	double y;
} P;

int main(void)
{
	P b, a[17] = { 0, }; //구조체 배열 a의 모든 요소의 멤버들은 0으로 초기화되었다.

	printf("%d %d\n", sizeof(b), sizeof(a));
	printf("%d %s %f\n", a[0].x, a[0].name, a[0].y);
	printf("%d %s %f\n", a[3].x, a[3].name, a[3].y);

	return 0;
}