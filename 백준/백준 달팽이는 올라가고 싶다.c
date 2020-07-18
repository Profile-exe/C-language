#include <stdio.h>

int main() {

    int A, B, V, day = 0;

    scanf("%d %d %d", &A, &B, &V);

    if (((V - B) % (A - B)) != 0)
        day = (V - B) / (A - B) + 1;
    else
        day = (V - B) / (A - B);

    printf("%d", day);
    return 0;
}