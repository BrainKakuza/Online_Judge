/*
Description
    Please write a program allow user input two integer and print out the result of addition subtraction
    multiplication division and modulo of two integer.

Input
    two integer separate by a single space

Output
    see sample output

Sample Input 1 : 1 2
Sample Output 1:

1 + 2 = 3
1 - 2 = -1
1 * 2 = 2
1 / 2 = 0
1 % 2 = 1
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int plus = a + b;
    int minus = a - b;
    int multiple = a * b;
    int divide = a / b;
    int leftover = a % b;

    printf("%d + %d = %d\n", a, b, plus);
    printf("%d - %d = %d\n", a, b, minus);
    printf("%d * %d = %d\n", a, b, multiple);
    printf("%d / %d = %d\n", a, b, divide);
    printf("%d %% %d = %d\n", a, b, leftover);

    return 0;
}