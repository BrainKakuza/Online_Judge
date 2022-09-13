/*
Description

Please finish function merger.

There are three parameter in function merger, a, b and c, all of them are pointer point to integer.

Function merger will take five integer after pointer a and five integer after pointer b and puts them after pointer c by increasing order.

Input
NONE

Output
NONE

Sample Input 1
NONE

Sample Output 1
NONE
*/

int merger(int *a, int *b, int *c)
{
    int temp;

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        c[i + 5] = b[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}