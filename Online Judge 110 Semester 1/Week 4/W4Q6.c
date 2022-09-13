/*
Description
    Morse code is a character encoding scheme used in telecommunication that encodes text characters as standardized
    sequences of two different signal durations called dots and dashes or dits and dahs. Morse code is named
    for Samuel F. B. Morse, an inventor of the telegraph. Write a program allow user input a number and print out corresponding Morse code.

Input
    Input is an integer number.

Output

Print out the corresponding Morse code. Mapping table as follow.

0-----

1.----

2..---

3...--

4....-

5.....

6-....

7--...

8---..

9----.

Sample Input 1
0

Sample Output 1
−−−−−

Sample Input 2
2095366

Sample Output 2
..--- ----- ----. ..... ...-- -.... -....


*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number, numberProcess, numberCounter, counter = 0, status;

    scanf("%d", &number);
    numberCounter = number;

    if (number == 0)
    {
        printf("-----");
    }
    else
    {

        while (numberCounter != 0)
        {
            numberCounter = numberCounter / 10;
            counter++;
        }

        while (counter != 0)
        {
            if (number >= pow(10, counter - 1))
            {
                status = 1;
            }
            else if (number < pow(10, counter - 1))
            {
                status = 0;
            }

            if (status == 1)
            {
                numberProcess = number / pow(10, counter - 1);

                if (numberProcess == 1)
                {
                    printf(".---- ");
                }
                else if (numberProcess == 2)
                {
                    printf("..--- ");
                }
                else if (numberProcess == 3)
                {
                    printf("...-- ");
                }
                else if (numberProcess == 4)
                {
                    printf("....- ");
                }
                else if (numberProcess == 5)
                {
                    printf("..... ");
                }
                else if (numberProcess == 6)
                {
                    printf("-.... ");
                }
                else if (numberProcess == 7)
                {
                    printf("--... ");
                }
                else if (numberProcess == 8)
                {
                    printf("---.. ");
                }
                else if (numberProcess == 9)
                {
                    printf("----. ");
                }

                number = number - (numberProcess * pow(10, counter - 1));
                counter--;
            }
            else if (status == 0)
            {
                printf("----- ");
                counter--;
            }
        }
    }

    return 0;
}