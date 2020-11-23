#include <stdio.h>
#include <stdlib.h>


// #define INT_SIZE sizeof(int) * 8

// int main() {
//     int num, index, i;
//     int bin[INT_SIZE];

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     index = INT_SIZE - 1;
//     while (index >= 0) {
//         bin[index] = num & 1;
//         index--;
//         num >>=1;
//     }

//     printf("Converted binary: ");
//     for (i=0;i < INT_SIZE; i++) {
//         printf("%d", bin[i]);
//     }
//     return 0;
// }

// int main() {
//     int a[10], n, i;
//     system("cls");
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(i=0;n>0;i++){
//         a[i]=n%2;
//         n=n/2;
//     }
//     printf("\nBinary number: ");
//     for (i=i-1;i>=0;i++){
//         printf("%d", a[i]);
//     }
//     return 0;
// }

// int main() {
//     int n, c ,k; 

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (c = 31; c >=0; c--){
//         k = n >> c;
//         if (k&1)
//             printf("1");
//         else
//             printf("0");  
//     }
//     printf("%d is the binary number of", n);
//     return 0;
// }

int main() {
    int num, bits, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d in  binary number is: \n", num);
    for(bits=31;bits>=0;bits--){
        i = num >> bits;
        if (i & 1) 
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}