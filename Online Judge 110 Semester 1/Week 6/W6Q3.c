/*
Description
    Write a program to determine if a string is apalindrome or not.

Input
    Input string will include only letter,please consider uppercase and lowercase as the same.

Output
    Please refer to the sample output.

Sample Input 1
AbcBa

Sample Output 1
AbcBa is a palindrome.

Sample Input 2
AAaab

Sample Output 2
AAaab is not a palindrome.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    char characters[50];

    scanf("%s", &characters);

    int length = strlen(characters), status = 1;

    for (int i = 0; i < length; i++)
    {
        if (tolower(characters[i]) != tolower(characters[length - 1 - i]))
        {
            status = 0;
            break;
        }
    }

    if (status == 1)
    {
        printf("%s is a palindrome.", characters);
    }
    else if (status == 0)
    {
        printf("%s is not a palindrome.", characters);
    }

    return 0;
}