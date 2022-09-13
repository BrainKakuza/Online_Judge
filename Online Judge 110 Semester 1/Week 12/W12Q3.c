/*
Description

Please finish the function replace and function replaceAll.

char *replace(char *source, char *pattern, char *replacement);

char *replaceAll(char *source, char *pattern, char *replacement);

Function replace will find the first appear pattern in source and replace it withreplacement.

Function replaceAll will find all pattern in source and replace it with replacement.

Input
NONE

Output
NONE

Sample Input 1
NONE

Sample Output 1
NONE
*/

char *replace(char *source, char *pattern, char *replacement)
{
    int i = 0, stop = 0;
    char *result;

    result = (char *)malloc(strlen(source) - strlen(pattern) + strlen(replacement));

    while (*source)
    {
        if (strstr(source, pattern) == source && stop == 0)
        {
            strcpy(&result[i], replacement);
            i += strlen(replacement);
            source += strlen(pattern);
            stop = 1;
        }
        else
        {
            result[i++] = *source++;
        }
    }

    result[i] = '\0';

    return result;
}
char *replaceAll(char *source, char *pattern, char *replacement)
{
    int i = 0, pattern_count;
    char *result;

    while (source[i] != '\0')
    {
        if (strstr(&source[i], pattern) == &source[i])
        {
            pattern_count++;
            i += strlen(pattern);
        }
        else
        {
            i++;
        }
    }

    i = 0;
    result = (char *)malloc(strlen(source) - (pattern_count * strlen(pattern)) + (pattern_count * strlen(replacement)));

    while (*source)
    {
        if (strstr(source, pattern) == source)
        {
            strcpy(&result[i], replacement);
            i += strlen(replacement);
            source += strlen(pattern);
        }
        else
        {
            result[i++] = *source++;
        }
    }

    result[i] = '\0';

    return result;
}