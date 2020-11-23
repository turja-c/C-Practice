#include <stdio.h>

// int main() {

//     char grade;
//     printf("Enter the grade that you got: ");

//     grade = getchar();

//     putchar(grade);

//     return 0;
// }

// int main () {

//     int grade; 

//     printf("Enter the grade that you got: ");
//     scanf("%d", &grade);

//     printf("The grade that you got was '%d', so you passed. Good job.", grade);
//     return 0;
// }

int main() {
    int a;
    float b;
    double c, sum;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter an float: ");
    scanf("%f", &b);

    printf("Enter an double: ");
    scanf("%lf", &c);

    printf("The numbers that you entered were: integer: %d; float: %f; double: %lf\n", a, b, c);

    sum = a + b + c;

    printf("The sum of the numbers are %lf\n", sum);
    return 0;
}