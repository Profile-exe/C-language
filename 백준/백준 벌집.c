#include<stdio.h>

int main() {
    int a, n = 1, count = 0;

    scanf("%d", &a);

    a -= 1;
    while (a > 0)
        a -= 6 * (n++);

    printf("%d", n);

}