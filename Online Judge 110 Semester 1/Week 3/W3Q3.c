/*
Description
    We use two points to present a segment in one dimensional coordinates. 
    Give you two segment, your job is to determine two segment are overlay or not.

Input
    Input consist 4 integer, first two present segment 1, and follow two present segment 2.

Output
    Print "overlay" if two segment overlay, "no overlay" if not.

Sample Input 1: 1 2 2 3 
Sample Output 1: no overlay

Sample Input 2: 3 1 2 4
Sample Output 2: overlay
*/

#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main(void){
	int x1 , x2 , y1 ,y2;

	scanf("%d%d%d%d" , &x1 , &x2 , &y1 , &y2);

	if((x1 >= y1 && x1 >= y2 && x2 >= y1 && x2 >= y2) ||
	(y1 >= x1 && y1 >= x2 && y2 >= x1 && y2 >= x2)){
		printf("no overlay");
	}else{
		printf("overlay");
	}
	
	

 	return 0;
}