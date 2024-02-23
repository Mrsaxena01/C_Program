/* 
   PROGRAM = Write a program to find number b/w 1 to 50 which are exactly divide by 2 % 3 ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while (i<=50)
    {
        if (i%2==0 && i%3==0)
        {
            printf("%d\t", i);
        }
      ++i;  
    }
    
    return 0;
}