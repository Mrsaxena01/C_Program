/* 
   PROGRAM = Write a program to print sum of digit of given number ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, rem, sum=0;
    printf("Enter any number = ");
    scanf("%d", &n);
    do
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }while(n!=0);
    printf("sum = %d", sum);
    return 0;
}