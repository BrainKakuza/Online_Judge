/*
Description
    Please write a program to find the maximum and minimum number.

Input
    Input consist multiple integer separate by a space.

Output
    Output maximum number first and than minimum, separate them using a single space.

Sample Input 1
1 2 3 4

Sample Output 1
4 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number, max, min, firstTime = 1;
    max = 0;

    while (scanf("%d", &number) != EOF)
    {
        if (firstTime == 1)
        {
            min = number;
            firstTime = 0;
        }

        if (number > max)
        {
            max = number;
        }

        if (number < min)
        {
            min = number;
        }
    }

    printf("%d %d", max, min);

    return 0;
}