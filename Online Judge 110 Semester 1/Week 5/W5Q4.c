/*
Description
    There is snail climbing on the wall from bottom, wall is 10 meter height.
    every day the snail climb up 4 meter, and slide down 3 meter at the night.
    In day 7 the snail climb up to the top of the wall. Please write a program
    ,read in height of the wall, how many meter the snail climb up a day
    , how many meter the snail slide down at night, give the answer of which day the snail climb up to the top of the wall.

Input
    Input consist three integer, first is height of the wall, second is meter of snail climb up a day
    , third is meter the snail slide down at night.

Output
    Out a number represent in which day the snail will climb to top of the wall.
    Output -1 if the snail can never climb up the top.

Sample Input 1
10 4 3

Sample Output 1
7
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int height, up, down, day = 0, current = 0;

    scanf("%d%d%d", &height, &up, &down);

    if (up >= height)
    {
        printf("1");
    }
    else if (down >= up)
    {
        printf("-1");
    }
    else
    {
        while (current < height)
        {
            day++;
            current = current + up;
            if (current >= height)
            {
                printf("%d", day);
                break;
            }
            current = current - down;
        }
    }

    return 0;
}