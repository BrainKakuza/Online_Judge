/*
Description

An electoral system is a set of rules that determine how elections and referendums are conducted and how their results are determined.
For a single-winner election, we have two different electoral systems:

- majoritarian system: candidate have to receive a majority (more than half) of the votes to be elected.
- plurality system: candidate with the highest number of votes wins, with no requirement to get a majority of votes.
Please write a program to detect which candidate wins the election.

Input

Input file consists several test cases.Each test case consists 2 lines of data.
First line is 2 integers n and m, shows the number of candidates and the number of votes.
Second line consists m integers, shows the votes. Candidates are numbered by integers [1, n]
. 1 < n < 200. 1 <= m <= 1000000. n = m = 0 shows end of test cases.

Output

Output of each test case occupy one line.If there are no single-winner, output "No winner".
If the winner may win a majoritarian election, output "Majoritarian winner" and the winner.
If the winner can only win a plurality election, output "Plurality winner" and the winner.

Sample Input 1
3 7
1 1 1 3 1 2 3
2 4
1 1 2 2
3 6
1 1 1 2 2 3
2 6
1 2 2 3 3 3
0 0

Sample Output 1
Majoritarian winner 1
No winner
Plurality winner 1
Plurality winner 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int candidate, voter, winner;

    while (1)
    {

        scanf("%d%d", &candidate, &voter);

        if (candidate == 0 && voter == 0)
        {
            break;
        }

        int candidates[candidate], voters[voter], score[candidate];
        winner = 0;

        for (int i = 0; i < candidate; i++)
        {
            candidates[i] = i + 1;
            score[i] = 0;
        }

        for (int i = 0; i < voter; i++)
        {
            scanf("%d", &voters[i]);
        }

        for (int i = 0; i < voter; i++)
        {
            for (int j = 0; j < candidate; j++)
            {
                if (voters[i] == candidates[j])
                {
                    score[j] += 1;
                }
            }
        }

        for (int i = 0; i < candidate; i++)
        {
            if (score[i] > (voter / 2))
            {
                printf("Majoritarian winner %d\n", candidates[i]);
                winner = -1;
                break;
            }
            else
            {
                for (int j = 0; j < candidate; j++)
                {
                    if (candidates[i] != candidates[j])
                    {
                        if (score[i] - score[j] > 0)
                        {
                            winner = candidates[i];
                        }
                        else if (score[i] - score[j] < 0)
                        {
                            break;
                        }
                        else if (score[i] - score[j] == 0)
                        {
                            winner = 0;
                            break;
                        }
                    }
                }
            }
        }

        if (winner == 0)
        {
            printf("No winner\n");
        }
        else if (winner > 0)
        {
            printf("Plurality winner %d\n", winner);
        }
    }

    return 0;
}