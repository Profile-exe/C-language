#include <stdio.h>
#define _USE_MATH_DEFINES // math.h�� include�ϱ� ���� ���� (math.h ��������� #ifdef _USE~~ ... �̹Ƿ� ���Ǹ� ����ߵ�)
#include <math.h>

int main()
{
    int n;
    double r, s;

    scanf("%lf %d", &r, &n);

    s = 0.5 * n * sin(360/(double)n*M_PI/180) * pow(r, 2);

    printf("%.3f", s);


    return 0;
}