/*
Description
    Gave you a number n, please find the maximum even number less than or equal to n.

Input
    An positive integer n.

Output
    An largest even number less than or equal to n.

Sample Input 1: 4
Sample Output 1: 4

Sample Input 2 : 5
Sample Output 2: 4
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d", a);
    }
    else
    {
        int result = a - 1;
        printf("%d", result);
    }
}