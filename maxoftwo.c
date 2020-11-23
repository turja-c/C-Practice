#include <stdio.h>

int main() {
    int first, second, max;

    printf("Enter two numbers: ");
    scanf("%d%d", &first, &second);

    max = (first > second) ? first : second;

    printf("max number for %d and %d is: %d", first, second, max);
    return 0;
}