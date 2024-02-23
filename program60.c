/* 
   PROGRAM = Write a program to print the sum of integer number b/w 1 to 100 ?
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
        sum = sum*10 + rem;
        n = n/10;
    } while (n!=0);
    printf("New number = %d", sum);
    return 0;
}