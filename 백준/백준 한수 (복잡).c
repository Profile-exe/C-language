#include <stdio.h>

int get_count1(int x);
int get_count2(int x);
int get_count3(int x);

int main(void)
{
	int n, result = 0;
	
	scanf("%d", &n);

	if (n < 10)
		result = get_count1(n);
	else if (n < 100)
		result = get_count2(n);
	else if (n <= 1000)
		result = get_count3(n);

	printf("%d", result);
	return 0;
}

int get_count1(int x)
{
	return x; // 한자리수 -> 무조건 d = 0 -> 모두 등차수열
}

int get_count2(int x)
{
	return x; // 두자리수 -> 공차 한번만 더함 -> 모두 등차수열
}

int get_count3(int x)
{
	int i, j, ignore = 0, number, count = 0;
	for (i = 1; i <= 7; i++) { // d > 0일 때 d = 1 이어도 최댓값 789 -> 백의자리(i) 최대 7
		if (i > x / 100) break;
		for (j = 1; j <= 4; j++) { // 159 -> 공차(d) 최대 4
			number = 100 * i + 10 * (i + j) + (i + 2 * j);
			if (i + 2 * j > 9) { // 일의자리합이 10 이상이면 세지 않는다
				j -= 1;
				break;
			}
			if (number > x) { // x보다 커지면 세지 않는다
				j -= 1;
				break;
			}
		}
		if (j > 4) j -= 1;
		count += j;
		if (number > x)	break;
	}

	for (i = 2; i <= 9; i++) { // d < 0일 때 d = -1 이어도 최솟값 210 -> 백의자리 최소 2
		if (i > x / 100) break;
		ignore = 0;
		for (j = 1; j < i; j++) { // 951 -> 공차(d) 최대 -4
			number = 100 * i + 10 * (i - j) + (i - 2 * j);
			if (number > x) { // number보다 크다면 경우를 빼줘야됨 -> ignore++;
				ignore++;
				continue;
			}
			if (i - 2 * j < 0) {
				j -= 1;
				break;
			}
		}		
		if (j >= i) j -= 1;
		count = count + j - ignore; // ignore 빼주기
		if (i - 2 * j < 0)	break;
	}

	for (i = 1; i <= x / 100; i++) { // d = 0일 때
		number = 100 * i + 10 * i + i;
		if (number > x) {
			i -= 1;
			break;
		}
	}
	if (i > x / 100) i -= 1;
	count += i;
	return 99 + count;
}