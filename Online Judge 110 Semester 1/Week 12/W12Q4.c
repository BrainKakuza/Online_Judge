/*
Description

Please write a program that read in asentence and print it backward.

Input

Input will be a sentence content only letter.

Output

The backward sentence

Sample Input 1
How are you

Sample Output 1
you are How
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    char text[100], reverse[100];

    int i = 0, j = 0;

    gets(text);

    int length = strlen(text);

    int startWord = length - 1;
    int endWord = length - 1;

    while (startWord > 0)
    {
        if (text[startWord] == ' ')
        {
            i = startWord + 1;
            while (i <= endWord)
            {
                reverse[j] = text[i];
                i++;
                j++;
            }
            reverse[j++] = ' ';
            endWord = startWord - 1;
        }
        startWord--;
    }

    for (int i = 0; i <= endWord; i++)
    {
        reverse[j] = text[i];
        j++;
    }

    reverse[j++] = '\0';

    printf("%s", reverse);
}