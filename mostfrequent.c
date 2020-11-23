// cps 109 assignment one in c 
// 1) highest number of times char repeated in str
// 2) if char repeated x times print y
// 3) combine with for loop for "four of a kind"


#include <stdio.h>
#define MAX_CHARS 255
// #define MAX_SIZE 100
int main() {
    // char str[MAX_SIZE];
    int freq[MAX_CHARS];
    int i = 0, max;
    int ascii;

    char str[100] = "hello";

    for (i = 0; i < MAX_CHARS; i++) {
        freq[i] = 0;
    }

    i = 0;
    while (str[i] != '\0') {
        ascii = (int)str[i];
        freq[ascii] += 1;
        i++;
    }

    max = 0;
    for (i = 0; i < MAX_CHARS; i++) {
        if (freq[i] > freq[max]) {
            max = i;
        }
    }  

    
    printf("Maximum occuring character is '%c' = '%d' times", max, freq[max]);

    return 0;
}