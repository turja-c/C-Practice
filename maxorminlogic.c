#include <stdio.h>

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &num1, &num2);

//     (num1 > num2)
//         ? printf("number 1 is the bigger number")
//         : printf("number 2 is the bigger number");

//     return 0;
// }

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is the bigger number", num1);
    } else {
        printf("%d is the bigger number", num2);
    }

    return 0;

}