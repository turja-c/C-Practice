#include <stdio.h>
#include <math.h>

int main() {
    double principle, time, rate, sinterest, cinterest, base;

    printf("Enter the prinicple: ");
    scanf("%lf", &principle);

    printf("Enter the time: ");
    scanf("%lf", &time);

    printf("Enter the rate: ");
    scanf("%lf", &rate);

    sinterest = (principle * rate * time) /100;
    base = 1+(rate/100);
    cinterest = principle * pow(base, time);
    printf("Simple Interest: %lf\n", sinterest);
    printf("Compound Interest: %lf", cinterest);

    return 0;


}