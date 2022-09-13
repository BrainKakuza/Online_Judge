/*
A sparse matrix is a matrix in which most of the elements are zero. Representing a sparse matrix by a 2D array leads to wastage of lots of memory as zeroes in the matrix are of no use in most of the cases. So, we can compress the sparse matrix by only store non-zero elements. This means storing non-zero elements with triples- (Row, Column, value).

0  0  0  0  0  0
0  3  0  0  0  0
0  0  0  6  0  0
0  0  9  0  0  0
0  0  0  0  12 0

Here is a 5X6 matrix, there are 4 element non-zero, we using three number represent it

5  6  4

After the three number are (Row, Column, value):

row col val
 1   1   3
 2   3   6
 3   2   9
 4   4   12

Write a program to read the compressed matrix and print out the original matrix.

Input

First line consists 3 integers. First and second integers shows the dimensions of original matrix. Third integer k shows number of non-zero elements. Followed k lines are content of the sparse matrix. Each line consists 3 integers, row number, column number, and data.

Output

Output original matrix. Attach a white space behind each element.

Sample Input 1
5 6 4
1 1 3
2 3 6
3 2 9
4 4 12

Sample Output 1
0 0 0 0 0 0
0 3 0 0 0 0
0 0 0 6 0 0
0 0 9 0 0 0
0 0 0 0 12 0
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int column, row, input;

    scanf("%d %d %d", &row, &column, &input);
    int matrix[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < input; i++)
    {
        int x, y, number;
        scanf("%d %d %d", &x, &y, &number);
        matrix[x][y] = number;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}