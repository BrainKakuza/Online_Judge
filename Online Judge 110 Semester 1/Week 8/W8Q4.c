/*
Description

You have 2 tables,coursesandscores.coursesconsists 3 columns,sid,student_id, andcourse_id.scoresconsists 2 columns,sidandscore.
Please find that how many students failed on at least one course.

Input

First line consists 2 integers m and n, shows number of rows incoursesandscores.

Followed m lines are records ofcourses.student_idare 8-digits numbers begin with non-zero digit.sidandscoresare positive integers smaller than 1000.

Followed n lines are records ofscores.sidare positive integers smaller than 1000.scoreare integers in range [0, 100].

Output

Student will be flunked when his/her average score in the course less than 60.
Output is 2 integers shows number of student and student failed on at lease one course.

Sample Input 1
2 4
1 10800001 5
2 10800002 5
1 90
1 29
2 65
2 60

Sample Output 1
2 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int data[10000][5], course, scores;
    int score, sid;
    int sid_detect, student_detect, fail = 0, student = 0;

    scanf("%d%d", &course, &scores);

    for (int i = 0; i < course; i++)
    {
        scanf("%d%d%d", &data[i][0], &data[i][1], &data[i][2]);
        data[i][3] = 0;
        data[i][4] = 0;
    }

    for (int i = 0; i < scores; i++)
    {
        scanf("%d%d", &sid, &score);
        for (sid_detect = 0; sid_detect < course; sid_detect++)
        {
            if (data[sid_detect][0] == sid)
            {
                break;
            }
        }
        data[sid_detect][3] += score; // number
        data[sid_detect][4] += 1;     // counter
    }

    for (int i = 0; i < course; i++)
    {
        if (data[i][3] / data[i][4] < 60)
        {
            fail++;
            for (int j = i - 1; j >= 0; j--)
            {
                if (data[j][3] / data[j][4] < 60 && data[i][1] == data[j][i])
                {
                    fail--;
                }
            }
        }

        for (student_detect = i - 1; student_detect >= 0; student_detect--)
        {
            if (data[student_detect][1] == data[i][1])
            {
                break;
            }
        }

        if (student_detect == -1)
        {
            student++;
        }
    }

    printf("%d %d", student, fail);

    return 0;
}