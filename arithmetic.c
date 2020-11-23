#include <stdio.h>

int main() {
    int a, b, sum, difference, product, quotient, modulos;

    printf("Enter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    modulos = a % b;

    printf("sum = %d\n", sum);
    printf("difference = %d\n", difference);
    printf("product = %d\n", product);
    printf("quotient = %d\n", quotient);
    printf("modulos = %d\n", modulos);

    return 0;

}