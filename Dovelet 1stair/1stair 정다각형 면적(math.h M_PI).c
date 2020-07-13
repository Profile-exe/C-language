#include <stdio.h>
#define _USE_MATH_DEFINES // math.h를 include하기 전에 선언 (math.h 헤더파일은 #ifdef _USE~~ ... 이므로 정의를 해줘야됨)
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