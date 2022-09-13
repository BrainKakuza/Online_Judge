/*
Description

Finish the following function. The function swap two number a and b.

void swap(int *a, int *b)
{
}

Input
NONE

Output
NONE

Sample Input 1
NONE

Sample Output 1
NONE
*/

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}