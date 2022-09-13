/*
Description

Gomoku, also called Five in a Row, is an abstract strategy board game.
It is traditionally played with black and white stones on a 19×19 board.
The winner is the first player to form an unbroken chain of five stones horizontally, vertically, or diagonally.
Please write a program to determine if there is a winner or not.

Input

Input content 19 line, each line content 19 character and a new line

O represent white stone, X represent black stone and _ means there is no stone on that spot.

Output

Output "White" if white win, "Black" if black win, "No winner" if no one win.

Sample Input 1
___________________
___________________
___________________
___________________
___________________
_________O_O_______
__________XX_O_____
_________XOXX______
________XXOXX_X____
_______XOOXXXXOX___
______O_XXOOOXO____
________OXOOXOO____
__________O_O______
___________O_X_____
__________O________
___________________
___________________
___________________
___________________

Sample Output 1
White
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    char table[19][19];
    int winner = 0;
    int i, j;

    for (int m = 0; m < 19; m++)
    {
        for (int k = 0; k < 19; k++)
        {
            scanf("%c", &table[m][k]);
        }
    }

    for (i = 0; i < 19; i++)
    {
        for (j = 0; j < 19; j++)
        {
            if (table[i][j] == '_')
            {
                // continue;
            }
            else if (table[i][j] == 'O')
            {
                if (table[i][j + 1] == 'O' && table[i][j + 2] == 'O' && table[i][j + 3] == 'O' && table[i][j + 4] == 'O')
                {
                    printf("White");
                    winner = 1;
                    break;
                }
                else if (table[i][j - 1] == 'O' && table[i][j - 2] == 'O' && table[i][j - 3] == 'O' && table[i][j - 4] == 'O')
                {
                    printf("White");
                    winner = 1;
                    break;
                }
                else if (table[i + 1][j] == 'O' && table[i + 2][j] == 'O' && table[i + 3][j] == 'O' && table[i + 4][j] == 'O')
                {
                    printf("White");
                    winner = 1;
                    break;
                }
                else if (table[i - 1][j] == 'O' && table[i - 2][j] == 'O' && table[i - 3][j] == 'O' && table[i - 4][j] == 'O')
                {
                    printf("White");
                    winner = 1;
                    break;
                }
                else if (table[i + 1][j + 1] == 'O' && table[i + 2][j + 2] == 'O' && table[i + 3][j + 3] == 'O' && table[i + 4][j + 4] == 'O')
                {
                    printf("White");
                    winner = 1;
                    break;
                }
                else if (table[i + 1][j - 1] == 'O' && table[i + 2][j - 2] == 'O' && table[i + 3][j - 3] == 'O' && table[i + 4][j - 4] == 'O')
                {
                    printf("White");
                    winner = 1;
                    break;
                }
                else if (table[i - 1][j - 1] == 'O' && table[i - 2][j - 2] == 'O' && table[i - 3][j - 3] == 'O' && table[i - 4][j - 4] == 'O')
                {
                    printf("White");
                    winner = 1;
                    break;
                }
                else if (table[i - 1][j + 1] == 'O' && table[i - 2][j + 2] == 'O' && table[i - 3][j + 3] == 'O' && table[i - 4][j + 4] == 'O')
                {
                    printf("White");
                    winner = 1;
                    break;
                }
            }
            else if (table[i][j] == 'X')
            {
                if (table[i][j + 1] == 'X' && table[i][j + 2] == 'X' && table[i][j + 3] == 'X' && table[i][j + 4] == 'X')
                {
                    printf("Black");
                    winner = 1;
                    break;
                }
                else if (table[i][j - 1] == 'X' && table[i][j - 2] == 'X' && table[i][j - 3] == 'X' && table[i][j - 4] == 'X')
                {
                    printf("Black");
                    winner = 1;
                    break;
                }
                else if (table[i + 1][j] == 'X' && table[i + 2][j] == 'X' && table[i + 3][j] == 'X' && table[i + 4][j] == 'X')
                {
                    printf("Black");
                    winner = 1;
                    break;
                }
                else if (table[i - 1][j] == 'X' && table[i - 2][j] == 'X' && table[i - 3][j] == 'X' && table[i - 4][j] == 'X')
                {
                    printf("Black");
                    winner = 1;
                    break;
                }
                else if (table[i + 1][j + 1] == 'X' && table[i + 2][j + 2] == 'X' && table[i + 3][j + 3] == 'X' && table[i + 4][j + 4] == 'X')
                {
                    printf("Black");
                    winner = 1;
                    break;
                }
                else if (table[i + 1][j - 1] == 'X' && table[i + 2][j - 2] == 'X' && table[i + 3][j - 3] == 'X' && table[i + 4][j - 4] == 'X')
                {
                    printf("Black");
                    winner = 1;
                    break;
                }
                else if (table[i - 1][j - 1] == 'X' && table[i - 2][j - 2] == 'X' && table[i - 3][j - 3] == 'X' && table[i - 4][j - 4] == 'X')
                {
                    printf("Black");
                    winner = 1;
                    break;
                }
                else if (table[i - 1][j + 1] == 'X' && table[i - 2][j + 2] == 'X' && table[i - 3][j + 3] == 'X' && table[i - 4][j + 4] == 'X')
                {
                    printf("Black");
                    winner = 1;
                    break;
                }
            }
        }

        //   printf("%d %d\n" , i , j);
        if (winner == 1)
        {
            break;
        }
        else if (winner == 0 && i == 18 && j == 19)
        {
            printf("No winner");
            break;
        }
    }

    return 0;
}