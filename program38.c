/* 
   PROGRAM = Write a program to find factorial of any number?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int rec(int);
int main()
{
    
    int fact, n;
    printf("Enter any number = ");
    scanf("%d", &n);
    fact = rec(n);
    printf("Factorial value = %d", fact);
    return 0;
}
int rec(int x)
{
    int f;
    if (x == 0)
    {
        return(1);
    }
    else
    {
        f = x * rec(x-1);
        return(f);
    }
}