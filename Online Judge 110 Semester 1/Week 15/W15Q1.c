/*
Description

Please write a program that read in anexpression and give its result.

Input

Input will be an expression content only digit, +, -, /, * and space.

Output

Please output the result of expression.

When you do the division, please round down to integer.

Sample Input 1
1 + 2 * 3 / 4

Sample Output 1
2

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char text[10000];        // Store the original input
    char textNoSpace[10000]; // Store the input that delete every space
    char operation[100];     // Store the operation in the input
    int numbers[100];        // Store the numbers in the input
    int counter = 0;

    scanf("%[^\n]", text);

    int i = 0, j = 0, k = 0;
    // i for number , j for operation , k for the loop

    for (int m = 0; m < strlen(text); m++)
    {
        if (text[m] != ' ')
        {
            textNoSpace[i] = text[m];
            i++;
        }
    }

    i = 0;

    while (k < strlen(textNoSpace))
    {
        if (textNoSpace[k] >= '0' && textNoSpace[k] <= '9')
        {
            int temp = 0;
            while (textNoSpace[k] >= '0' && textNoSpace[k] <= '9')
            {
                temp = (temp * 10) + (textNoSpace[k] - '0');
                k++;
            }
            numbers[i] = temp;
            i++;
            counter++;
        }
        else if (textNoSpace[k] == '+' || textNoSpace[k] == '-' || textNoSpace[k] == '*' || textNoSpace[k] == '/')
        {
            operation[j] = textNoSpace[k];
            k++;
            j++;
        }
    }

    i = 0; // For the operation
    j = 0; // Temporary for replacement

    // 1 2 3 4 5 6 7
    //+ * * + - /

    // Find the * and / as a sequence
    while (i < strlen(operation))
    {
        int temp = 0;
        j = 0;

        if (operation[i] == '*' || operation[i] == '/')
        {
            j = i;
            if (operation[i] == '*')
            {
                temp += numbers[i] * numbers[i + 1];
                i++;
                while (operation[i] == '*' || operation[i] == '/')
                {
                    if (operation[i] == '*')
                    {
                        temp *= numbers[i + 1];
                        i++;
                    }
                    else if (operation[i] == '/')
                    {
                        temp = temp / numbers[i + 1];
                        i++;
                    }
                }
                numbers[j] = temp;
            }
            else if (operation[i] == '/')
            {
                temp += numbers[i] / numbers[i + 1];
                i++;
                while (operation[i] == '*' || operation[i] == '/')
                {
                    if (operation[i] == '*')
                    {
                        temp *= numbers[i + 1];
                        i++;
                    }
                    else if (operation[i] == '/')
                    {
                        temp = temp / numbers[i + 1];
                        i++;
                    }
                }
                numbers[j] = temp;
                // printf("%d %d\n" , numbers[j] , j);
            }
        }
        else
        {
            i++;
        }
    }

    i = 0;
    j = 0;

    int result = 0;
    result = numbers[i];

    while (i < strlen(operation))
    {
        if (operation[i] == '+' || operation[i] == '-')
        {
            if (operation[i] == '+')
            {
                result += numbers[i + 1];
                i++;
            }
            else if (operation[i] == '-')
            {
                result -= numbers[i + 1];
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    printf("%d", result);

    return 0;
}