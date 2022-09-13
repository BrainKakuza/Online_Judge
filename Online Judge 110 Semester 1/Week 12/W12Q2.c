/*
Description

Please finish the function trim as below

char *trim(char *dest);

Removes all leading and trailing occurrences '\n', '\t' and ' ' of a set of characters specified in dest.

Input
none

Output
none

Sample Input 1
none

Sample Output 1
none
*/

char *trim(char *dest)
{
    int i = 0, counter = 0;

    while (dest[counter] == ' ' || dest[counter] == '\n' || dest[counter] == '\t')
    {
        counter++;
    }

    if (counter > 0)
    {
        while (dest[i + counter] != '\0')
        {
            dest[i] = dest[i + counter];
            i++;
        }
    }

    dest[i] = '\0';

    int j = strlen(dest) - 1;

    while (j > 0)
    {
        if (dest[j] == ' ' || dest[j] == '\n' || dest[j] == '\t')
        {
            j--;
        }
        else
        {
            break;
        }
    }

    dest[j + 1] = '\0';

    return dest;
}