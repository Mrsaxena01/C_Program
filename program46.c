/* 
   PROGRAM = Write a program to print even number b/w 1 to 50 ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 1;
    while (i<=50)
    {
        if (i%2==0)
        {
            printf("%d\t", i);
        }
        ++i;
        
    }
    
    return 0;
}