#include <stdio.h>

// int main() {
//     int num, binnumval, decval = 0, base = 1, rem;

//     printf("Enter a binary number: ");
//     scanf("%d", &num);

//     binnumval = num;

//     while (num > 0) {
//         rem = num % 10;
//         decval = decval + rem * base;
//         num = num /10;
//         base = base * 2; 
//     }
//     printf("The binary number is = %d\n", binnumval);
//     printf("The decimal number is: %d", decval);

//     return 0;

// }

int main(void) {
    char bin; int dec;
    printf("Enter a binary number: ");
    scanf("%d", &dec);
    while (bin != '\n') {
        scanf("%c", &bin);
        if (bin == '1')
            dec = dec * 2 + 1;
        else
            if (bin =='0')
                dec *= 2; 
    }
    printf("%d\n", dec);

    return 0;
}