#include <stdio.h>

int main() {
    char ch;

    printf("input character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <='z') {
        printf("lowercase");
    } else if (ch >= 'A' && ch <='Z') {
        printf("uppercase");
    }
    return 0;
}