/*
Description
    Read in two integer m and n, determine if m is multiple of n.

Input
    Input will be two integer m and n separate by a single space.

Output
    Please reference the sample out

Sample Input 1: 9 3
Sample Output 1: 9 is a multiple of 3.

Sample Input 2: 9 4
Sample Output 2: 9 is not a multiple of 4.
*/

#include <stdio.h>

int main(void)
{
    int firstValue, secondValue;
    scanf("%d", &firstValue);
    scanf("%d", &secondValue);

    if (firstValue % secondValue == 0)
    {
        printf("%d is a multiple of %d.", firstValue, secondValue);
    }
    else
    {
        printf("%d is not a multiple of %d.", firstValue, secondValue);
    }

    return 0;
}
