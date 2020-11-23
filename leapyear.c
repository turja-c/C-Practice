#include <stdio.h>

int main() {
    int year;
    printf("enter a year: ");
    scanf("%d", &year);

  (year%4==0 && year%100 != 0) 
        ? printf("leap year") 
        : (year%400==0) 
        ? printf("leap year") 
        : printf("common year");
    
    return 0;
}

