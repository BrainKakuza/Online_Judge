/*
Description
    A mathmatician Goldbach's conjecture: any even number(larger than 2) can divide into two prime number’s sum.
    But some even numbers can divide into many pairs of two prime numbers’ sum.

    Example:10 =3+7, 10=5+5, 10 can divide into two pairs of two prime number.

Input
    Input consist a positive number n(4<=n<=32766).

Output
    Print the value of how many pairs are this even number can be divided into.

Sample Input 1
1234

Sample Output 1
25
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number, numberProcess, firstPrime, secondPrime, counter = 0;

    scanf("%d", &number);

    for (int i = 2; i <= number; i++)
    {

        firstPrime = 1;
        secondPrime = 1;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                firstPrime = 0;
                break;
            }
        }

        if (firstPrime == 1)
        {
            numberProcess = number - i;
            if (numberProcess >= (number / 2))
            {

                for (int j = 2; j <= sqrt(numberProcess); j++)
                {
                    if (numberProcess % j == 0)
                    {
                        secondPrime = 0;
                        break;
                    }
                }

                if (secondPrime == 1)
                {
                    counter++;
                }
            }
        }
    }

    printf("%d", counter);

    return 0;
}