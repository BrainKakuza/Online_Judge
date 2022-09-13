/*
Description

Give you a 2-D array represent a maze, in this maze, 1 is wall and 0 is a space you can walk on.
You can move 4 direction, up, down, left and right.

Write a program to see if a maze has a way from start to the end.

Input

First lint pf input will be a integer number represent size of the maze.
Follow by n rows and n columns every row. In the maze, left top is the start and right button is end.

Output

if there is a way from start to the end then print "Yes", print "No" if not .

Sample Input 1
5
0 0 0 0 0
1 1 1 1 0
0 0 0 0 0
0 1 1 1 1
0 0 0 0 0

Sample Output 1
Yes

Sample Input 2
5
0 0 0 0 0
1 1 1 1 0
0 0 1 0 0
0 1 1 1 1
0 0 0 0 0

Sample Output 2
NO
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int area;

    scanf("%d", &area);

    int maze[area][area];

    for (int i = 0; i < area; i++)
    {
        for (int j = 0; j < area; j++)
        {
            scanf("%d", &maze[i][j]);
        }
    }

    maze[0][0] = 2;
    int counter = 1;

    while (counter)
    {
        counter = 0;
        for (int i = 0; i < area; i++)
        {
            for (int j = 0; j < area; j++)
            {
                if (maze[i][j] == 0)
                {
                    if ((i > 0 && maze[i - 1][j] == 2) || (i < area - 1 && maze[i + 1][j] == 2) || (j > 0 && maze[i][j - 1] == 2) || (j < area - 1 && maze[i][j + 1] == 2))
                    {
                        maze[i][j] = 2;
                        counter = 1;
                    }
                }
            }
        }
    }

    if (maze[area - 1][area - 1] == 2)
    {
        printf("Yes");
    }
    else if (maze[area - 1][area - 1] != 2)
    {
        printf("No");
    }

    return 0;
}