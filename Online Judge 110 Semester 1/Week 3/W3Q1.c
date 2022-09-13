/*
Description
    Please input an integer, determine if the integer is odd or even.

Input
    Just an integer.

Output
    output "odd" if the integer is odd, "even" if the integer is even.

Sample Input 1: 1
Sample Output 1: odd

Sample Input 2: 2
Sample Output 2: even
*/

#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    if (input % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}