/*
Description
    Give you a matrix. Please output the elements in clockwise spiral order.

Input
    First line is two integers m and n, shows number of rows and number of columns.

    Followed m lines are content of the matrix.

Output
    Elements of the matrix in clockwise spiral order.

Sample Input 1
3 3
1 2 3
4 5 6
7 8 9

Sample Output 1
1 2 3 6 9 8 7 4 5
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int row, column;

    scanf("%d%d", &row, &column);

    int numbers[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    int direction = 0;
    int left = 0, top = 0, right = column - 1, down = row - 1;

    while (left <= right && top <= down)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                printf("%d ", numbers[top][i]);
            }
            top += 1;
        }
        else if (direction == 1)
        {
            for (int i = top; i <= down; i++)
            {
                printf("%d ", numbers[i][right]);
            }
            right -= 1;
        }
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", numbers[down][i]);
            }
            down -= 1;
        }
        else if (direction == 3)
        {
            for (int i = down; i >= top; i--)
            {
                printf("%d ", numbers[i][left]);
            }
            left += 1;
        }
        direction = (direction + 1) % 4;
    }

    return 0;
}