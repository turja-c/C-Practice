#include <stdio.h>
#include <math.h>
#define BASE 10

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Here are the numbers in order from 1 to %d:\n", num);

//     for(int i = 1; i <= num; i++) {
//         printf("%d\n", i);
//     }

//     return 0;
// }

// int main() {
//     char ch;
//     for (ch = 'a';ch <= 'z'; ch++) {
//         printf("%c", ch);
//     }
//     return 0;

// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for(int i = 1; i <= num; i++) {
//         if (i%2 == 0) {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// int main() {
//     int num;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("sum from 1 to %d is:\n", num);

//     for(int i = 0; i <= num; i++) {
//         sum += i;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// int main() {
//     int num;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("odd numbers sum from 1 to %d is:\n", num);

//     for(int i = 0; i <= num; i++) {
//         if (i%2 != 0) {
//             sum += i;
//         }
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// int main() {
//     int num, i;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("multiplication table of %d is:\n", num);

//     for(i = 0; i <= 10; i++) {
//         printf("%d * %d = %d\n", num, i, (num * i));
//     }
//     return 0;
// }

// int main() {
//     long long num;
//     int count = 0;

//     printf("Enter any number: ");
//     scanf("%lld", &num);

//     count = (num == 0) ? 1 : (log10(num) +1);
    
//     printf("total digits: %d", count);
//     return 0;
    
// }

// int main() {
//     int num, first, last;

//     printf("Enter any number: ");
//     scanf("%d", &num);

//     first = num;

//     while(first >= 10) {
//         first = first / 10;
//     }

//     last = num % 10;

//     printf("first number is %d: \n", first);
//     printf("last number is %d: \n", last);

//     return 0;
// }


// int main() {
//     int num, first, last, digits;

//     printf("Enter any number: ");
//     scanf("%d", &num);

//     last = num %10;

//     digits = (int)log10(num);

//     first = (int)(num/pow(10, digits));

//     printf("First digit = %d\n", first);
//     printf("Last digit = %d\n", last);

//     return 0;
// }

// int main() {
//     int num, first, last, sum;

//     printf("enter any number: ");
//     scanf("%d", &num);

//     first = num;
//     while (first >= 10) {
//         first = first / 10;
//     }
    
//     last = num % 10;

//     sum = first + last;

//     printf("first number = %d\n", first);
//     printf("last number = %d\n", last);
//     printf("sum of numbers = %d\n", sum);

//     return 0;
// }

// int main() {
//     int num, first, last, digits, swap;

//     printf("enter any number: ");
//     scanf("%d", &num);

//     last = num %10;
//     digits = log10(num);
//     first = num / pow(10, digits);

//     printf("original first number = %d\n", first);
//     printf("original last number = %d\n", last);

//     swap = last;
//     swap *= (int)pow(10, digits);
//     swap += num % ((int)pow(10, digits));
//     swap -= last;
//     swap += first;

//     printf("swapped numbers = %d\n", swap);
//     printf("swapped first number = %d\n", first);
//     printf("swapped last number = %d\n", last);
// }

// int main() {
//     int num, sum=0;

//     printf("input any number: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         sum += num % 10;
//         num = num / 10;

//     }
//     printf("%d", sum);
//     return 0;

// }

// int main() {
//     int num, reverse = 0, last; 

//     printf("Enter the number: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         last = num %10;
//         reverse *= 10;
//         reverse += last;
//         num /= 10;
//     }

//     printf("the reverse is %d", reverse);
//     return 0;
// }

// int main() {
//     int num, reverse=0, last;
//     printf("Enter the number: ");
//     scanf("%d", &num);

//     while(num != 0) {
//         last = num %10;
//         reverse *= 10;
//         reverse += last;
//         num /= 10;
//     }
//     printf("%d is the reverse", reverse);
//     return 0;
// }

// int main()
// {
//     long long num, n;
//     int i, lastDigit;
//     int freq[BASE];

//     /* Input number from user */
//     printf("Enter any number: ");
//     scanf("%lld", &num);

//     /* Initialize frequency array with 0 */
//     for(i=0; i<BASE; i++)
//     {
//         freq[i] = 0;
//     }

//     /* Copy the value of 'num' to 'n' */
//     n = num; 

//     /* Run till 'n' is not equal to zero */
//     while(n != 0)
//     {
//         /* Get last digit */
//         lastDigit = n % 10;

//         /* Remove last digit */
//         n /= 10;

//         /* Increment frequency array */
//         freq[lastDigit]++;
//     }

//     /* Print frequency of each digit */
//     printf("Frequency of each digit in %lld is: \n", num);
//     for(i=0; i<BASE; i++)
//     {
//         printf("Frequency of %d = %d\n", i, freq[i]);
//     }

//     return 0;
// }

// int main() {
//     long num, n;
//     int i, last; 
//     int freq[BASE];

//     printf("Enter a number: ");
//     scanf("%ld", &num);

//     for(i=0; i<BASE; i++) {
//         freq[i] = 0;
//     }

//     n = num;

//     while(n != 0) {
//         last = n%10;
//         n /= 10;
//         freq[last]++;
//     }
//     printf("frequency of each digit is: %ld\n", num);
    
//     for(i=0;i<BASE;i++) {
//         printf("frequency of %d = %d\n", i, freq[i]);
//     }
//     return 0;
//     }

