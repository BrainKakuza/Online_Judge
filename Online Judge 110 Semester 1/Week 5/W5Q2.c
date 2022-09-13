/*
Description
    Please write a program to find the greatest common divisor of  three number.

Input
    Input consist several test case, each test case a line.
    For every test case there are three non-negative integer in it and separate by a space.

Output
    For each test case output the result in one line.

Sample Input 1
3 6 9
10 15 20

Sample Output 1
3
5
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int num1, num2, num3, highest, result;

    while (scanf("%d %d %d", &num1, &num2, &num3) != EOF)
    {
        highest = num1;
        if (num1 < num2)
        {
            highest = num2;
        }
        else if (num2 < num3)
        {
            highest = num3;
        }

        for (int i = 1; i <= highest; i++)
        {
            if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0)
            {
                result = i;
            }
        }

        printf("%d\n", result);
    }

    return 0;
}