/*
Description
    Three segment length a, b, c, c has maximum length,
    if a + b > c than these three segment can construct a triangle. If a * a + b * b = c * c it will be a "right triangle"
    , if a * a + b * b > c * c it will be a "acute triangle"
    , if a * a + b * b < c * c it will be a "obtuse triangle".
    Write a program to determine what kind of triangle it will be.

Input
    Input consist three integer a, b, c, c will be the maximum value.

Output
    如果三個線段可以構成一個三角形，就輸出他是哪種三角形，如果是銳角三角形就輸出 "acute triangle"
    ，如果是鈍角三角形就輸出 "obtuse triangle" ，如果是直角三角形就輸出 "right triangle"。
    如果三個線段無法構成一個三角形則輸出 "can not construct"

Sample Input 1: 1 2 3
Sample Output 1: can not construct

Sample Input 2: 3 4 5
Sample Output 2: right triangle
*/

#include <stdio.h>

int main(void)
{
    int firstValue, secondValue, thirdValue;
    scanf("%d", &firstValue);
    scanf("%d", &secondValue);
    scanf("%d", &thirdValue);

    if (firstValue + secondValue > thirdValue)
    {
        if ((firstValue * firstValue) + (secondValue * secondValue) == (thirdValue * thirdValue))
        {
            printf("right triangle");
        }
        if ((firstValue * firstValue) + (secondValue * secondValue) > (thirdValue * thirdValue))
        {
            printf("acute triangle");
        }
        if ((firstValue * firstValue) + (secondValue * secondValue) < (thirdValue * thirdValue))
        {
            printf("obtuse triangle");
        }
    }
    else
    {
        printf("can not construct");
    }

    return 0;
}
