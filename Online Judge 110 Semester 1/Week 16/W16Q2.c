/*
Description

Cryptanalysis is the process of breaking someone else’s cryptographic writing. This sometimes involves

some kind of statistical analysis of a passage of (encrypted) text. Your task is to write a program which

performs a simple analysis of a given text.

Input
The first line of input contains a single positive decimal integer n. This is the number of lines which

follow in the input. The next n lines will contain zero or more characters (possibly including whitespace).

This is the text which must be analyzed.

Output
Each line of output contains a single uppercase letter, followed by a single space, then followed by a

positive decimal integer. The integer indicates how many times the corresponding letter appears in the

input text. Upper and lower case letters in the input are to be considered the same. No other characters

must be counted. The output must be sorted in descending count order; that is, the most frequent

letter is on the first output line, and the last line of output indicates the least frequent letter. If two

letters have the same frequency, then the letter which comes first in the alphabet must appear first in

the output. If a letter does not appear in the text, then that letter must not appear in the output.

Sample Input 1
3
This is a test.
Count me 1 2 3 4 5.
Wow!!!! Is this question easy?

Sample Output 1
S 7
T 6
I 5
E 4
O 3
A 2
H 2
N 2
U 2
W 2
C 1
M 1
Q 1
Y 1
*/

#include <stdio.h>
char to_big(char c)
{
    if (c >= 'a')
    {
        return c - 32;
    }
    else
    {
        return c;
    }
}
int main()
{

    int frequent[26] = {0}; // Array to store the frequent value of alphabet that appear

    int fre_max; // A value that one or more than one alpahbets appear the most
    int n;       // To indicate how many string will put in

    scanf("%d", &n);

    int i;
    int j;
    char c = getchar();

    fre_max = 0;

    while (n--)
    {
        char str[10000];
        gets(str); // Get each value of string
        for (i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= 'a' && 'z' >= str[i]) || (str[i] >= 'A' && 'Z' >= str[i]))
            {

                // count against the specified index
                frequent[(int)to_big(str[i]) - 'A']++;

                /*
                    frequency is sorted by how each alphabet appear first to last a to z
                    for example if the first alphabet is t and 't' is more than 'a' it minus 32 to make it equal to the value T which is less than
                    t then in frquent[] will have - 'A' to be able to sort in 26 alphabet from appear first to last
                    if the alphabet is already M it will automatic return the same value with no convertion
                */

                if (fre_max < frequent[(int)to_big(str[i]) - 'A'])
                {
                    fre_max = frequent[(int)to_big(str[i]) - 'A']; // if there is an character that appear more frequence than previous character
                }
            }
        }
    }

    /*
    The first for loop is for sorting from how frequent the alphabet appear. The second loop is for sorting an alphabet for a to z
    for example
    S 7
    T 6
    I 5
    U 2
    W 2
    C 1
    Y 1

    max = 7 since S appear the most
    the first i will equal to 7. there is only s that appear 7 times . an[i] at the s position is 7 and idx is also 7 so it is printed
    the forth idx os 2. there are w and u that appear 2 time. The second for loop will make u appear before w since u come before w
  */

    for (i = fre_max; i > 0; i--)
    {
        for (j = 0; j < 26; j++)
        {
            if (frequent[j] == i)
            {
                printf("%c %d\n", 'A' + j, frequent[j]);
            }
        }
    }

    return 0;
}