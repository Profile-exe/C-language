#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define findIndex(x) (x - 'a')
#define MAX_TRASH_SIZE 1000

typedef struct _word {
    int c, a, n, p, l, s, t, i;
}WORD;

int count(WORD a, int num) {
    int value1 = 0, value2 = 0;
    while (a.c && a.a && a.n) {
        value1++;
        a.c--; a.a--; a.n--;
    }
    while (a.p && a.l && a.a && a.s && a.t && a.i && a.c) {
        value2++;
        a.p--; a.l--; a.a--; a.s--; a.t--; a.i--; a.c--;
    }
    printf("There are %d cans %d plastics in the %dth bin.\n", value1, value2, num);
}

int main(void) {
    int bin_num = 0;
    int word_num = 0;
    int para = 0;
    char* trashes = (char*)malloc(MAX_TRASH_SIZE, sizeof(char));

    scanf("%s", trashes);
    scanf("%d", &word_num); // In intermediate you don't need to use this variable. This will be 2 in the all testcases.
    scanf("%d", &para);		// In intermediate you don't need to use this variable. This will be 1 in the all testcases.
    scanf("%d", &bin_num);	// In intermediate you don't need to use this variable. This will be 1 in the all testcases.

    WORD w1 = { 0, }, w2 = { 0, };

    for (int i = 0, j = 1; i < strlen(trashes) && j < strlen(trashes); i += 2, j += 2) {
        switch (trashes[i]) {
        case 'c': w1.c++; break;
        case 'a': w1.a++; break;
        case 'n': w1.n++; break;
        case 'p': w1.p++; break;
        case 'l': w1.l++; break;
        case 's': w1.s++; break;
        case 't': w1.t++; break;
        case 'i': w1.i++; break;
        }
        switch (trashes[j]) {
        case 'c': w2.c++; break;
        case 'a': w2.a++; break;
        case 'n': w2.n++; break;
        case 'p': w2.p++; break;
        case 'l': w2.l++; break;
        case 's': w2.s++; break;
        case 't': w2.t++; break;
        case 'i': w2.i++; break;
        }
    }

    printf("________________________Summary________________________\n");
    count(w1, 0);
    count(w2, 1);
}