#include <stdio.h>

int main(void)
{
	int n, is_cute = 0, list[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
		is_cute += list[i];
	}
	if (is_cute <= n / 2) puts("Junhee is not cute!");
	else				  puts("Junhee is cute!");
	return 0;
}