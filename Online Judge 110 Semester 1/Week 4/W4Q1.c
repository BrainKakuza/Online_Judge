/*
Description
    Please write a program that can keep read in integer until 0, sum up all integer and print out the result.

Input
    Input consist several integer until 0.

Output
    sum of all integer

Sample Input 1 : 
1
2
3
4
0

Sample Output 1 :
10
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h> 

int main(void){
   int number, originNum;
   originNum = 0;

   while (true){
       scanf("%d", &number);
       //Stop the loop if the number is 0
       if(number == 0){
           break;
       }
       //Continue adding the number
       if(number != 0){
           originNum = originNum + number;
       }
   }

   /* Print the final value*/
   printf("%d", originNum);
   

    
    return 0;
}