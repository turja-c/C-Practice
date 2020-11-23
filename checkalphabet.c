#include <stdio.h>

int main() {
    char ch;
    printf("enter any character: ");
    scanf("%c", &ch);

    (ch > 'a' && ch < 'z') || (ch > 'A' && ch < 'Z') 
        ? printf("alphabet")
        : printf("not alphabet");
    
    return 0;
}