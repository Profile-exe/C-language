#include <stdio.h>
void HAN(int N);

int main()
{
    int n;
    scanf("%d", &n);
    HAN(n);
}

void HAN(int N)
{

    if (N < 100)
        printf("%d", N);
    else
    {
        int i;
        int cnt;
        int A, B, C; //A는 100의자리 B는 10의자리 C는 1의자리
        cnt = 99;
        for (i = 100; i <= N; i++)
        {
            A = i / 100;
            B = i / 10 % 10;
            C = i % 10;

            if ((C - B) == (B - A))
                cnt++;
        }
        printf("%d", cnt);
    }
}
