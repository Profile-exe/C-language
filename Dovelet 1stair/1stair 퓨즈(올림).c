#include <stdio.h>

int main(void)
{
	int com, prin, rou, fuze;

	scanf("%d %d %d", &com, &prin, &rou);
	fuze = 2 * (2.5 * com + 2.0 * prin + 0.5 * rou);
	if (fuze / 10 != 0)
		fuze = (fuze + 9) / 10 * 10; // 1부터 올리는 것이므로 9를 더해야 한다.

	printf("%d amperes", fuze);

	return 0;
}