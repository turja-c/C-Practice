#include <stdio.h>

// int main() {
//     int num, i, j, ac;
    
//     printf("input number: ");
//     scanf("%d", &num);

//     ac = num;
//     ac =1;
//     for(i=1;i<=num;i++) {
//         printf("");
//         for(j=1;j<=num; j++) {
//             printf("%d", ac);
//         }
//          printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;

//     printf("input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++) {
//         for(j=1;j<=i;j++){
//             printf("%d", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;

//     printf("input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++) {
//         for(j=1;j<i;j++) {
//             printf("");
//         }
//         for(j=1;j<=(num-i+1);j++) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i,j;

//     printf("input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++){
//         for(j=1;j<=i;j++) {
//             if(i==1 || i==num || j==1 || j==i) {
//                     printf("1");
//                 } else{
//                     printf("0");
//                 }
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main() {
    int num, i, j;

    printf("input number:: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++) {
        for(j=1;j<=i;j++) {
            printf(" ");
        }
        printf("%d", i);
    }
    for(j=1; j<=((N - i) * 2 - 1); j++)
        {
            printf(" ");
        }
}
