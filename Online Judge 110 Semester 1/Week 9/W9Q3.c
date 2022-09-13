/*
Description

Finish the following function. The function sort the first n element in array inascending order.

void sort(int array[], int n)
{
}

Input
NONE

Output
NONE

Sample Input 1
NONE

Sample Output 1
NONE
*/

void sort(int array[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}