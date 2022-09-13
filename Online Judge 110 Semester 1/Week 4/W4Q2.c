/*
Description

    All factor

    Please write a program read in an integer and print out all its factor.

Input
    Input consist an positive integer.

Output
    Print out all factors incremental ordering.


Sample Input 1:
24

Sample Output 1:
1 2 3 4 6 8 12 24
*/

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}