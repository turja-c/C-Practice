// cps 109 assignment one in c 
// 1) highest number of times char repeated in str
// 2) if char repeated x times print y
// 3) combine with for loop for "four of a kind"


#include <stdio.h>
#define MAX_CHARS 255
#define HAND_SIZE 5
// #define MAX_SIZE 100

int main() {
    for( a=0; a<HAND_SIZE-1; a++)
	{
		for( b=a+1; b<HAND_SIZE; b++ )
		{
			if( hand[a].value > hand[b].value )
			{
				temp = hand[a];
				hand[a] = hand[b];
				hand[b] = temp;
			}
		}
	} 

    

    return 0;
}