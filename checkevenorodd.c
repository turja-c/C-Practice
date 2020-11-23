#include <stdio.h>

// int main() {
//    int num;

//    printf("Enter a number: ");
//    scanf("%d", &num);

//    (num%2==0)
//         ? printf("the number is even")
//         : printf("the number is odd");

//     return 0;
// }

int main() {
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);

   printf("Max number is %s", ((num%2==0) ? "even" : "odd"));

   return 0;
}