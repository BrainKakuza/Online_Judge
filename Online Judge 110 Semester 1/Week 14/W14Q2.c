/*
Description

F(x) = x + 1

G(x, y) = x + y

Please write a program to calculate the value of composite of F and G

Input

Input will be the composite of F and G.

The parameter of F and G are integer only.

Output

An integer represent the value of function.

Sample Input 1
F(G(1,F(3)))

Sample Output 1
6
*/

#include <stdio.h>

int calculate(char *input, int *n)
{
    while (input[*n] == ',' || input[*n] == ')' || input[*n] == '(')

        (*n)++;

    if (input[*n] == 'F')
    {
        (*n)++;
        return calculate(input, n) + 1;
    }
    else if (input[*n] == 'G')
    {
        (*n)++;
        return calculate(input, n) + calculate(input, n);
    }
    else
    {
        int temp = 0;
        while (input[*n] >= '0' && input[*n] <= '9')
        {
            temp = (temp * 10) + (input[*n] - '0');
            (*n)++;
        }
        return temp;
    }
}

int main()
{
    int n = 0;
    char input[1000];
    gets(input);
    printf("%d", calculate(input, &n));
}