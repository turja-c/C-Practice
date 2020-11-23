#include <stdio.h>

int main() {

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >='a' && ch <= 'z') || (ch >='A' && ch <= 'Z') ) {
        printf("This is an alphabet");
    } else {
        printf("This is not an alphabet");
    }
    return 0;
}