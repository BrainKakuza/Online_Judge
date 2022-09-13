/*
Description
    Given the square root of a positive integer N is between 0 and N, let the square root of N be x, a=0 is the lower bound
    , and b=N is the upper bound. Then there is the inequality a<=x<=b, square the inequality to get a*a<=x*x=N<=b*b
    , and let c = (a+b)/2 according to the root approximation through bisection, when square of c is greater than or equal to N
    , we update the upper bound and get a new inequality a<=x<=c, otherwise, we update the lower bound and get a new inequality c<=x<=b.
    The difference between the upper and lower bounds is called the error.
    Please design a program in which the user enters a positive integer and calculates the square root of the positive integer.
    Please be accurate to four decimal places.

Input
    An integer n

Output
    Output the root of naccurate to four decimal places.

Sample Input 1
4

Sample Output 1
2.0000

Sample Input 2
2

Sample Output 2
1.4142
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    double number, lowerbound, upperbound, middle;

    scanf("%lf", &number);
    lowerbound = 0;
    upperbound = number;

    while (upperbound - lowerbound > 0.000001)
    {
        middle = (upperbound + lowerbound) / 2;
        if (pow(middle, 2) > number)
        {
            upperbound = middle;
        }
        else if (pow(middle, 2) < number)
        {
            lowerbound = middle;
        }
        else if (pow(middle, 2) == number)
        {
            upperbound = middle;
            break;
        }
    }

    printf("%.4f", upperbound);

    return 0;
}