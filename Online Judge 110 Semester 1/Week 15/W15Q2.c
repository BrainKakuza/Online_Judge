/*
Description

Give you a matrix. Please output the elements in clockwise spiral order.

You can only use recursive way to do this.

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
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void printSpiral(int row, int column, int left, int right, int top, int down, int matrix[row][column])
{
    if (left <= right - 1 && top <= down - 1)
    {
        for (int i = left; i <= right - 1; i++)
        {
            printf("%d ", matrix[top][i]);
        }
        top += 1;
        for (int i = top; i <= down - 1; i++)
        {
            printf("%d ", matrix[i][right - 1]);
        }
        right -= 1;
        for (int i = right - 1; i >= left; i--)
        {
            printf("%d ", matrix[down - 1][i]);
        }
        down -= 1;
        for (int i = down - 1; i >= top; i--)
        {
            printf("%d ", matrix[i][left]);
        }
        left += 1;

        printSpiral(row, column, left, right, top, down, matrix);
    }
}

int main(void)
{
    int row, column;
    scanf("%d %d", &row, &column);

    int matrix[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printSpiral(row, column, 0, column, 0, row, matrix);
}