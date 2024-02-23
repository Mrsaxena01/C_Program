/* 
   PROGRAM = Write a program of while loop ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int x = 4, y = 0;
    while (x>=0)
    {
        x--;
        y++;
            if (x == y)
            {
                continue;
            }
            else
            {
                printf("x = %d, y = %d\n", x, y);
            }
            
    }
    
    return 0;
}