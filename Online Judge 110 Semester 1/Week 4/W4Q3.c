/*
Description
    Please write a program to determine if a number is prime or not.

Input
    Input consist several test case. Every test case is just a integer. Input ended with 0.

Output
    For every test case output "prime" if the input is a prime number, output "not a prime" if not.


Sample Input 1
2
3
4
5
0

Sample Output 1
prime
prime
not a prime
prime

*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number, status;

    while (1)
    {
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        status = 1;

        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                status = 0;
                break;
            }
        }

        if (status == 0 || number == 1)
        {
            printf("not a prime\n");
        }
        else if (status == 1)
        {
            printf("prime\n");
        }
    }

    return 0;
}