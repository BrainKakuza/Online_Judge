/*
Description
    Giving 10 number, output them in ascending order.

Input
    Input consist 10 integer, each of them separate by a single space.

Output
    output the 10 number inascending order.

Sample Input 1
9 8 7 6 5 4 3 2 1 0

Sample Output 1
0 1 2 3 4 5 6 7 8 9
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numbers[i] < numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}