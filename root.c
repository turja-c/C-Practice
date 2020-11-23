#include <stdio.h>
#include <math.h>

int main() {
    double num, answer;

    printf("Enter a number: ");
    scanf("%lf", &num);
    answer = sqrt(num);

    printf("%lf root is %lf", num, answer);

    return 0;
}