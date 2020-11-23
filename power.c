#include <stdio.h> 
#include <math.h>

int main() {

    // long way 
    // int base, exp;
    // long long result = 1;
    // printf("Enter a number: ");
    // scanf("%d", &base);
    // printf("Enter an expoent: ");
    // scanf("%d", &exp);
    // while (exp != 0) {
    //     result *= base;
    //     --exp;
    // }
    // printf("answer: %lld", result);
    // return 0;

    // short way
    double base, expo, power;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &expo);

    power = pow(base, expo);

    printf("%lf ^ %lf = %lf", base, expo, power);
    return 0;
}