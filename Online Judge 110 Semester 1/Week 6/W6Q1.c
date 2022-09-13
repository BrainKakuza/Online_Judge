/*
Description
    A truncated mean or trimmed mean is a statistical measure of central tendency, much like the mean and median.
    It involves the calculation of the mean after discarding given parts of a probability distribution or sample at the high and low end
    , and typically discarding an equal amount of both.
    This number of points to be discarded is usually given as a percentage of the total number of points
    , but may also be given as a fixed number of points.Write a program calculate trimmed mean with discarding 3 number from high and low.

Input
    Input start with a integer N(N > 6) represent the number of sample, fellow by N integer represent the sample.

Output
    Output trimmed mean round down to second decimal place

Sample Input 1
7 1 2 3 4 5 6 7

Sample Output 1
4.00

Sample Input 2
8 1 2 3 4 5 6 7 8

Sample Output 2
4.50
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int input, counter = 0, sum = 0;

    scanf("%d", &input);

    int numbers[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (numbers[i] < numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        numbers[i] = 0;
        numbers[input - 1 - i] = 0;
    }

    for (int i = 0; i < input; i++)
    {
        if (numbers[i] != 0)
        {
            sum += numbers[i];
            counter++;
        }
    }

    printf("%.2f", (float)sum / counter);

    return 0;
}