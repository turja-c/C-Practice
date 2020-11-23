#include <stdio.h>

// int main() {
// 	int num;
// 	printf("enter a number");
// 	scanf("%d", &num);

// 	if (num & 1) {
// 		printf("%d is an odd number", num);
//     }else{
// 		printf("%d is an even number", num);
// 	}

// 	return 0;
// }

// #bitwise operator 

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num & 1)
        ? printf("%d is odd", num)
        : printf("%d is even", num);
    return 0;
}