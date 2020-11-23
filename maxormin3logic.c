#include <stdio.h>

// int main() {
//     int num1, num2, num3, max;

//     printf("enter three numbers: ");
//     scanf("%d%d%d", &num1, &num2, &num3);

//     if (num1 > num2) {
//         if (num1 > num3) {
//             max = num1;
//         } else{
//             max = num3;
//         }
//     } else {    
//         if (num2 > num3) {
//             max = num2;
//         } else{
//             max = num3;
//         }
//     }
//     printf("max number of the three is: %d", max);
//     return 0;
// }

int main() {
    int num1, num2, num3, max;

    printf("enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if ((num1 > num2) && (num1 > num3)){
        max = num1;
    } else if ((num2 > num1) && (num2 > num3)){
        max = num2;
    } else if ((num3 > num1) && (num3 > num2)){
        max = num3;
    }
    printf("max number of the three is: %d", max);
    return 0;
}