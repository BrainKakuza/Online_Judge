/*
Description:
    A man walks X km in Y hours  in the same direction. What is the man's velocity in km/h for the journey?

Input:
    Input contain two number in a line and separate by a single space
    , first number stand for distance in km, second number stand for time in hour.

Output:
    A number stand for velocity in km/h, please rounded to six decimal places.


Sample Input 1: 7 2
Sample Output 1: 3.500000
*/

#include<stdio.h>

int main(void){
	float distances , seconds;
 	float velocity;
    scanf("%f %f" , &distances , &seconds);
    velocity = distances / seconds;
    printf("%f" , velocity);

  return 0;
}