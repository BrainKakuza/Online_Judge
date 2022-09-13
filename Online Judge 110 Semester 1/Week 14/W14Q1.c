/*
Description

Please write a program to sort string.

The rule of order as follow.

cook greater the book

javascript greater then java


Input

The first line of input content an integer n (n < 100)

For next n line, each line content a string with only lower case letter.

Length of every string is less than 50.


Output

Output a string for a line inascending order.

Sample Input 1
5
look
book
cook
javascript
java

Sample Output 1
book
cook
java
javascript
look
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char text[n][100], temp[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &text[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(text[i], text[j]) > 0)
            {
                strcpy(temp, text[i]);
                strcpy(text[i], text[j]);
                strcpy(text[j], temp);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        puts(text[i]);
    }
}
