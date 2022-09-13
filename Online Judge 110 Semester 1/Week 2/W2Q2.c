/*
Description
    Read a 4 digit number, reverse it and display it.

Input
    A 4 digit number, first digit is not 0.

Output
    A 4 digit number after reverse.

Sample Input 1: 1234
Sample Output 1: 4321
*/

#include <stdio.h>
int main()
{
    int number;
    int reverse = 0, lastDigit;

    scanf("%d", &number);

    while (number != 0)
    {
        lastDigit = number % 10;
        printf("%d", lastDigit);
        number = number / 10;
    }

    return 0;
}