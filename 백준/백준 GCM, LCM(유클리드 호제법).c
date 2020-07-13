#include <stdio.h>

int main()
{
    int x, y, big, small, gcm, lcm, rest;

    scanf("%d %d", &x, &y);

    if (x > y) {
        big = x;
        small = y;
    }
    else {
        big = y;
        small = x;
    }

    do {
        rest = big % small;
        if (rest != 0) {
            big = small;
            small = rest;
        }
    } while (rest != 0);
    
    gcm = small;
    lcm = x * y / gcm;

    printf("%d\n%d", gcm, lcm);

    return 0;
}