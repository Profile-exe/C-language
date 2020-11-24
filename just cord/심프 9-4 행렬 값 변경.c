#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arrayPrint(char arr, int v[][9], int N) {
    printf("%c array\n", arr);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d", v[i][j]);
        putchar('\n');
    }
}

int main() {
    int a[9][9] = { 0, };
    int b[9][9] = { 0, };

    int N;
    char s[30];
    char value[9][9];

    scanf("%d", &N);
    scanf("%s", s);

    strcpy(value[0], strtok(s, "/"));
    for (int i = 1; i < 5; i++)
        strcpy(value[i], strtok(NULL, "/"));
    int row = atoi(value[2]), col = atoi(value[3]), num = atoi(value[4]);

    if (strcmp(value[0], "array") != 0) {
        printf("not array");
        exit(0);
    }
    if (row >= N) {
        printf("row size error");
        exit(0);
    }
    if (col >= N) {
        printf("column size error");
        exit(0);
    }

    switch (value[1][0]) {
    case 'a':
        a[row][col] = num;
        arrayPrint('a', a, N);
        arrayPrint('b', b, N);
        break;
    case 'b':
        b[row][col] = num;
        arrayPrint('b', b, N);
        arrayPrint('a', a, N);
        break;
    }
}