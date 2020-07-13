#include <stdio.h>

int main(void)
{
	int cost, sell, fake, change, loss;

	scanf("%d %d %d %d", &cost, &sell, &fake, &change);

	loss = sell - fake - cost;

	printf("%d", -loss);

	return 0;
}