/*
Description
    Please write a program for prime factorization.

Input
    Input consist several test case. Every test case is just a integer. Input ended with 0.

Output
    Please reference the sample output.

Sample Input 1
12
81
0

Sample Output 1
12 = 2 * 2 * 3
81 = 3 * 3 * 3 * 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number, numberProcess, primeOrNot;

    while (1)
    {
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        numberProcess = number;

        printf("%d = ", number);

        for (int i = 2; i <= number; i++)
        {
            primeOrNot = 1;

            if (number % i == 0)
            {
                for (int j = 2; j <= sqrt(i); j++)
                {
                    if (i % j == 0)
                    {
                        primeOrNot = 0;
                        break;
                    }
                }

                if (primeOrNot == 1)
                {
                    while (numberProcess % i == 0)
                    {
                        numberProcess = numberProcess / i;
                        printf("%d", i);
                        if (numberProcess != 1)
                        {
                            printf(" * ");
                        }
                    }
                }

                if (numberProcess == 1)
                {
                    printf("\n");
                    break;
                }
            }
        }
    }

    return 0;
}