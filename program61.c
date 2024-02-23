/* 
   PROGRAM = Write a program to find number of digit in given number ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int count(int);
int main()
{
    int n, sum = 0;
    printf("Enter any number = ");
    scanf("%d", &n);
     do
    {
         n = n/10;
        sum = sum +1;
    } while (n!=0);
     printf("sum = %d", sum);
     return 0;
    
}