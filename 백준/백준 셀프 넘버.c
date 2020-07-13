#include <stdio.h>

int list[10001] = { 0 };

void noself_n()
{
	int a, div, noself;
	for (int i = 1; i <= 10000; i++) {
		div = noself = i, a = 0;
		do {
			a = div % 10;
			noself += a;
			div /= 10;
		} while (div != 0 || a != 0);
		list[noself]++;
	}
}

void self_n()
{
	for (int i = 1; i <= 10000; i++) {
		if (list[i] == 0) {
			printf("%d\n", i);
		}
	}
}

int main(void)
{
	noself_n();
	self_n();
	return 0;
}