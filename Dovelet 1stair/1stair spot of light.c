#include <stdio.h>

int main()
{
    double d, p, move;

    scanf("%lf", &d);
    scanf("%lf", &p);

    move = d - d * (1 + p / 100);

    printf("%.3f", move);

    return 0;
}