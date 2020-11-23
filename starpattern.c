#include <stdio.h>

// int main() {
//     int num, k=0;
//     printf("Input rows: ");
//     scanf("%d", &num);

//     for(int i=1; i <= num; i++, k = 0) {
//         for(int j = 1; j <= num - i; j++) {
//             printf(" ");
//         }
//         while (k != 2 * i-1){
//             printf("* ");
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int row, k=0, i, j;

//     printf("Input rows: ");
//     scanf("%d", &row);

//     for(i=1;i<=row;i++, k=0){
//         for(j=1;j<=row-i;j++) {
//             printf("  ");
//         }
//         while (k != 2 * i-1) {
//             printf("* ");
//             ++k;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// long fact(int n) {
//     long factorial = 1l;
//     while (n>= 1){
//         factorial *= n;
//         n--;
//     }
//     return factorial;
// }

// int main() {
//     int num, n, k, i;
//     long term;
//     printf("Input rows: ");
//     scanf("%d", &num);

//     for(n=0; n < num; n++) {
//         for(i=n;i<=num;i++)
//             printf("%3c", ' ');
//         for(k=0;k<=n;k++){
//             term = fact(n) / (fact(k)*fact(n-k));
//             printf("%6ld", term);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// long fact(int n) {
//     long factorial = 1l;
//     while(n >= 1) {
//         factorial *= n;
//         n--;
//     }
//     return factorial;
// }

// int main() {
//     int i, j, num, n;
//     long term;

//     printf("Input rows:");
//     scanf("%d", &num);

//     for(n=0;n<num;n++) {
//         for(i=n;i<=num;i++) {
//             printf("%3c", ' ');
//         }
//         for(j=0;j<=n;j++) {
//             term = fact(n) / (fact(j)*fact(n-j));
//             printf("%6ld", term);
//         }
//         printf("\n");
//     }
//     return 0;
// }   

// int main() {
//     int rows, cols, i, j;

//     printf("Input cols:");
//     scanf("%d", &cols);

//     printf("Input rows:");
//     scanf("%d", &rows);

//     for(i=1;i<=rows;i++) {
//         for(j=1;j<=cols;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int rows, i, j;

//     printf("Input number: ");
//     scanf("%d", &rows);

//     for(i=1; i<=rows; i++) {
//         for(j=1; j<=rows; j++) {
//             if (i==1 || i==rows || j==1 || j==rows) {
//                 printf("* ");
//             } else {
//                 printf("  ");
//         }
        
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j, k;

//     printf("Input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++) {
//         for(j=1;j<=num-i;j++){
//             printf(" ");
//         }
//         for(k=0;k<=num;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;
//     printf("Input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++){
//         for(j=1;j<=i;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;
//     printf("Input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++) {
//         for(j=1;j<=i;j++) {
//             if (j==1 || j==i || i==num) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;
//     printf("Input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++) {
//         for(j=1;j<i;j++) {
//             printf(" ");
//         }
//         for(j=i;j<num;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;

//     printf("Input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++){
//         for(j=i;j<num;j++){
//             printf(" ");
//         }
//         for(j=1;j<=(2*i-1);j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;

//     printf("Input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++) {
//         for(j=1;j<=i;j++) {
//             printf(" ");
//         }
//         for(j=1;j<=(num*2- (2*i-1));j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;

//     printf("Input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++) {
//         for(j=i;j<num;j++) {
//             printf(" ");
//         }
//         for(j=1;j<=(2*i-1);j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int i, j, rows;
//     int stars, spaces;
   
//     printf("Enter rows to print : ");
//     scanf("%d", &rows);
    
    
//     stars = 1;
//     spaces = rows - 1;
    
//     /* Iterate through rows */
//     for(i=1; i<rows*2; i++)
//     {
//         /* Print spaces */
//         for(j=1; j<=spaces; j++)
//             printf(" ");
        
//         /* Print stars */
//         for(j=1; j<stars*2; j++)
//             printf("*");
        
//         /* Move to next line */
//         printf("\n");
        
//         if(i<rows)
//         {
//             spaces--;
//             stars++;
//         }
//         else
//         {
//             spaces++;
//             stars--;
//         }
//     }
    
//     return 0;
// }

// int main() {
//     int num, i, j;
//     int stars, spaces;

//     printf("input rows: ");
//     scanf("%d", &num);
    
//     stars = 1;
//     spaces = num - 1;


//     for(i=1; i<num*2 ;i++) {

//         for(j=1;j<=spaces;j++) {
//             printf(" ");
//         }
//         for(j=1;j<stars*2;j++){
//             printf("*");
//         }
//         printf("\n");

//         if(i<num) {
//             spaces--;
//             stars++;
//         }else {
//             spaces++;
//             stars--;
//         }
//     }   
//     return 0;
// }

// int main() {
//     int num, i, j;

//     printf("input row: ");
//     scanf("%d", &num);

//     for(i=1;i<=num*2-1;i++) {
//         if (i == num) {
//             for(j=1;j<=num*2-1;j++)  {
//             printf("+");
//             } 
//         }
//         else {
//             for(j=1;j<=num-1;j++){
//                 printf(" ");
//             }
//             printf("+");
//             }
//         printf("\n");
//         }
//         return 0;
// }
    
// int main() {
//     int num, i, j;

//     printf("input row: ");
//     scanf("%d", &num);

//     for(i=1;i<=num*2-1;i++) {
//         if(i == num) {
//             for(j=1;j<num*2-1;j++) {
//                 printf("+");
//             }
//         }else {
//             for(j=1;j<num-1;j++) {
//                 printf(" ");
//             }
//             printf("+");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j, count;
    
//     printf("input number: ");
//     scanf("%d", &num);

//     count = num *2 -1;
//     for (i=1;i<=count;i++) {
//         for (j=1;j<=count;j++) {
//             if(j==i || j == count - i + 1) {
//                 printf("*");
//             } else {
//                     printf(" ");
//                 }
//             }
//             printf("\n");
//         }
//     return 0;       
// }

// int main() {
//     int num, i, j;

//     printf("Input length: ");
//     scanf("%d", &num);

//     int count = num *2 -1;

//     for(i=1;i<=count;i++) {
//         for(j=1;j<=count;j++) {
//             if (i==j || j==count - i + 1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int  main() {
//     int N, i, j;

//     printf("input number: ");
//     scanf("%d", &N);

//     for(i=1;i<N*2;i++) {
//         for(j=1;j<=N;j++) {
//             if((i==1 && (j==1 || j==N)) || 
//             (i==N && (j==1 || j==N)) || 
//             (i==N*2-1 && (j==1 || j==N))) {
//                 printf(" ");
//             } else if (i==1 || i==N || i==(N*2)-1 || j==1 || j==N) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j, k;

//     printf("Input number: ");
//     scanf("%d", &num);

//     for(i=1;i<=num;i++) {
//         for(j=i;j<=num;j++){
//             printf(" ");
//         }
//         for(k=1;k<=(2*i-1);k++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int num, i, j;
//     char name[50];

//     printf("Inputer name: ");
//     gets(name);

//     printf("Inputer number: ");
//     scanf("%d", &num);


//     for(i=1;i<=num;i++) {
//         for(j=1;j<=i;j++) {
//             printf(" ");
//         }
//         // printf("%s", name);
//         for(j=1;j<=(num*2 - (2*i-1));j++) {
//             printf("*");
//         }
//         printf("\n");
//     } 
//     return 0;
// }

int main() {
    int num, i, j;
    
    printf("input number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++) {
        for(j=1;j<=num; j++) {
            printf(" ");
        }
         printf("%d", num);
    }
    return 0;
}
