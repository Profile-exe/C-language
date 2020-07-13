#include <stdio.h>

int main(void) {
    int n, a, b, c, result = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        a = i % 10; //1의자리수
        b = ((i % 100) - a) / 10;//10의 자리수
        c = i / 100; //100의 자리수
        if (c == 0 || (c - b) == (b - a)) {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}