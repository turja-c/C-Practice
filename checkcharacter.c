#include <stdio.h>

int main() {
    char ch;

    printf("Input character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a character", ch);
    } else if ((ch >= '0') && (ch <= '9')) {
        printf("%c is a character", ch);
    } else {
        printf("This is not a character");
    }
    return 0;
}