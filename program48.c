/* 
   PROGRAM = Write a program to calculate factorial of a given number ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, n, fact=1;
    printf("Enter any number = ");
    scanf("%d", &n);
    while (i<=n)
    {
        fact = fact*i;
        ++i;
    }
    printf("Factorial value = %d", fact);
    
    return 0;
}