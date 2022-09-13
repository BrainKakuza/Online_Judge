/*
Description
    Read in a number, round it down to an integer and display on screen.

Input
    A number

Output
    Display the integer after round down.

Sample Input 1: 4.9
Sample Output 1: 4
*/

#include<stdio.h>
#include <math.h>

int main(void){
	float a;
  	scanf("%f" , &a);
	int result = floor(a);
  	printf("%d" , result);
  	

    return 0;
}