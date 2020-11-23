#include <stdio.h>

int main() {
    int first, second, third, max;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &first, &second, &third);

    max = (first > second && first > third) ? first : (second > third) ? second : third;

    printf("Max of %d, %d, and %d is: %d", first, second, third, max);
    return 0;
}