/* 
   PROGRAM = Write a program to print ASCII value of all character using while loop ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0;
    while (i<=255)
    {
        printf("%c = %d\t", i, i);
        ++i;
    }
    
    return 0;
}