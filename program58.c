/* 
   PROGRAM = Write a program to print the sum of all odd integer number b/w 1 to 100 ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, sum=0;
    do
    {
        sum = sum + i;
        i += 2;
    } while (i<=100);
    printf("sum = %d", sum);
    return 0;
}