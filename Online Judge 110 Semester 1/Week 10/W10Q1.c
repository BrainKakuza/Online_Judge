/*
Description

Please finish function elementAt.

There are two parameter  in elementAt, a pointer point to an integer and a integer n(n > 0).

Function elementAt return the nth integer after the pointer.

Input
NONE

Output
NONE

Sample Input 1
NONE

Sample Output 1
NONE
*/

int elementAt(int *pointer, int n)
{
    return *(pointer - 1 + n);
}