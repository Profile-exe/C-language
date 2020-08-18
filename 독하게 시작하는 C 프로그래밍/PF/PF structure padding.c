#include <stdio.h>
#include <string.h>

/*  Below structure1 and structure2 are same.
    They differ only in member's allignment */

struct structure1
{
    int id1;
    int id2;
    char name;
    char c;
    float percentage;
};

struct structure2
{
    int id1;
    char name;
    int id2;
    char c;
    float percentage;
};

struct structure3
{
    int id1;
    char name[4];
    char c;
    double percentage;
    int id2;
};

struct structure4
{
    short a;
    char name[19];
};

int main()
{
    struct structure1 a;
    struct structure2 b;
    struct structure3 c;
    struct structure4 d;

    printf("size of structure1 in bytes : %d\n",
        sizeof(a));
    printf("\n   Address of id1        = %u", &a.id1);
    printf("\n   Address of id2        = %u", &a.id2);
    printf("\n   Address of name       = %u", &a.name);
    printf("\n   Address of c          = %u", &a.c);
    printf("\n   Address of percentage = %u", &a.percentage);

    printf("   \n\nsize of structure2 in bytes : %d\n",
        sizeof(b));
    printf("\n   Address of id1        = %u", &b.id1);
    printf("\n   Address of name       = %u", &b.name);
    printf("\n   Address of id2        = %u", &b.id2);
    printf("\n   Address of c          = %u", &b.c);
    printf("\n   Address of percentage = %u", &b.percentage);
    
    printf("   \n\nsize of structure3 in bytes : %d\n",
        sizeof(c));
    printf("\n   Address of id1        = %u", &c.id1);
    printf("\n   Address of name       = %u", &b.name);
    printf("\n   Address of c          = %u", &b.c);
    printf("\n   Address of percentage = %u", &b.percentage);
    printf("\n   Address of id2        = %u", &b.id2);

    printf("\n\n   float size            = %d", sizeof(float));
    printf("\n   double size           = %d", sizeof(double));
    printf("\n   %d", sizeof(d));
    getchar();

    return 0;
}