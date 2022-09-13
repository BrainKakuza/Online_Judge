/*
Description

Please finish function mystrcat and mystrncat

char *mystrcat(char *dest, char *src);

Function mystrcat appends a copy of the src string to the dest string.

char *mystrncat(char *dest, char *src, int n);

Function mystrncat appends the first n characters of src to dest.

Input
none

Output
none

Sample Input 1 
none

Sample Output 1
none
*/

char *mystrcat(char *dest, char *src)
{
  strcat(dest , src);
  
  return dest;
}

char *mystrncat(char *dest, char *src, int n)
{
  strncat(dest , src , n);
  
  return dest;
}