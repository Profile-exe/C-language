#include <stdio.h>

int main(void)
{
	int length, Sum, checksum = 0;
	int i, k, a[100];

	printf("Enter the length of your numbers : ");
	scanf_s("%d", &length);
	printf("Enter your numbers : ");
	for (i = 0; i < length; i++)
		scanf_s("%d", &a[i]);
	printf("Enter Sum : ");
	scanf_s("%d", &Sum);
	printf("Sub array is \n");

	/*k = 0;		//시작 인덱스
	while (1) {
		if (k > length) break;
		i = 0;
		while (checksum < Sum) {
			checksum += a[k + i];
		}
		if (checksum == Sum) {
			printf("%d ", a[])
		}
		k++;
		checksum = 0;
	}*/

	int index = 0;
	for (int i = 0; i < length; (index > length) ? i++, index = 0 : index++) {
		int sum = 0;
		for (int j = i; j <= index; j++) {
			sum += a[j];
		}
		if (sum == Sum) {
			for (int j = i; j <= index; j++)
				printf("%d ", a[j]);
			printf("\n");
		}
	}

	return 0;
}