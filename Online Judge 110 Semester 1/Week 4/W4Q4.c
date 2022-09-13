/*
Description
    Please write a program, input a positive integer to represent the number of regular triangle layers, and print this triangle.

Input
    A[1, 30] positive integer.


Output

    Print this regular triangle。

    Note：

    1.Expressed in ' * ' character.

    2.There is no space at the end of each line.

    3.There is no newline at the end of the last line.

Sample Input 1
5

Sample Output 1
    *
   * *
  * * *
 * * * *
* * * * *

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    int input;

    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= input - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
            if (j != i)
            {
                printf(" ");
            }
        }

        if (i != input)
        {
            printf("\n");
        }
    }
}