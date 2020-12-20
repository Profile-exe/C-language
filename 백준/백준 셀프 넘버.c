#include <stdio.h>
#include <math.h>

int v[10036] = { 0, }; // 9999가 생성하는 값이 최대 값 == 10035

int main(void)
{
	int max = 0;
	for (int i = 1; i <= 10035; i++) {	
		int tmp = i;
		for (int j = 0; j <= 4; j++)
			tmp += i % (int)pow(10, j + 1) / (int)pow(10, j);
		v[tmp] = 1;
	}
	for (int i = 1; i <= 10000; i++)	// 10000이하의 셀프넘버
		if (!v[i]) printf("%d\n", i);
	return 0;
}