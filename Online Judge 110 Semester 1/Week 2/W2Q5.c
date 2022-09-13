/*
Description
    Please write a program allow user input two floating point number and print out the result of addition, subtraction, multiplicationanddivision of two number.

Input
    two floating point number separate by a single space

Output
    see sample output

Sample Input 1: 1.5 2.5
Sample Output 1:
1.500000 + 2.500000 = 4.00
1.500000 - 2.500000 = -1.00
1.500000 * 2.500000 = 3.75
1.500000 / 2.500000 = 0.60
*/

#include <stdio.h>

int main(void)
{
    float a, b;
    scanf("%f %f", &a, &b);
    float plus = a + b;
    float minus = a - b;
    float multiple = a * b;
    float divide = a / b;

    printf("%f + %f = %.2f\n", a, b, plus);
    printf("%f - %f = %.2f\n", a, b, minus);
    printf("%f * %f = %.2f\n", a, b, multiple);
    printf("%f / %f = %.2f\n", a, b, divide);

    return 0;
}
