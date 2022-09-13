/*
Description

Please finish function between.

Function between have two parameter a and b which are both the pointer point to integer.

Function between return the summation of all integer after pointer a and before pointer b.

Input
NONE

Output
NONE

Sample Input 1
NONE

Sample Output 1
NONE
*/

int between(int *a, int *b)
{
    int result = 0, *i;
    for (i = a; i < b; i++)
    {
        result += *i;
    }

    return result;
}