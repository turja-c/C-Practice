#include <stdio.h>

int main() {
    char a;
    unsigned char a1;

    short b;
    unsigned short b1;

    int c;
    unsigned int c1;

    long d;
    unsigned long d1;

    long long e;
    unsigned long long e1;

    float f;
    double g;
    long double h;

    printf("Enter a character: ");
    a = getchar();
    // getchar;

    printf("Enter another character: ");
    a1 = getchar();
    // getchar;

    printf("Enter a short number: ");
    scanf("%hi", &b);

    printf("Enter anothe short number: ");
    scanf("%hu", &b1);

    printf("Enter a int number: ");
    scanf("%d", &c);

    printf("Enter another int number: ");
    scanf("%u", &c1);

    printf("Enter a long number: ");
    scanf("%ld", &d);

    printf("Enter another long number: ");
    scanf("%lu", &d1);

    printf("Enter a short number: ");
    scanf("%lld", &e);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a duble: ");
    scanf("%lf", &g);

    printf("Enter a long double: ");
    scanf("%Lf", &h);

    return 0;
}