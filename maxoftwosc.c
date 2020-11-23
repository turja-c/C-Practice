#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("input numbers: ");
    scanf("%d%d", &num1, &num2);

    max = (num1 > num2);

    switch(max) {
        case 0:
            if (max == True) {}
                printf("&d is the max", num1);
                break;
            }   
        case 1:
            printf("&d is the max", num2);
            break;
        default:
            printf("they are the same");
    }
    return 0;
}