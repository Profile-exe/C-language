#include <stdio.h>

int main(void)
{
	int n, i, max = 0;
	double avg = 0.0;
	double subject[1000] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n; i++)	{
		scanf("%lf", &subject[i]);
		if (max < subject[i])
			max = subject[i];
	}

	for (i = 0; i < n; i++) {
		subject[i] = subject[i] / (double)max * 100.0;
		avg += subject[i];
	}
	avg /= n;
	printf("%f", avg);
	return 0;
}