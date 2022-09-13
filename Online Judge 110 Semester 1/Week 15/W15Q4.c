/*
Description

Bulls and Cows is a

https://en.wikipedia.org/wiki/Bulls_and_Cows

Please write a program to determine the number of bulls and cows.

Input

Input the secret number in first line and opponent's try in second line.

Output

Output two number represent the number of bulls and cows.

Sample Input 1
1234
2914

Sample Output 1
1 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char number1[10];
    char number2[10];

    scanf("%s", &number1);
    scanf("%s", &number2);

    int length1 = strlen(number1);
    int length2 = strlen(number2);

    int bull = 0;
    int cow = 0;

    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (number1[i] == number2[j] && i == j)
            {
                bull++;
            }
            else if (number1[i] == number2[j] && i != j)
            {
                cow++;
            }
        }
    }

    printf("%d %d", bull, cow);
}