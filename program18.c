/* 
   PROGRAM = Write a program using left & right shift operator where x = 128 and y = 32 ?
             x>>1 and y<<2
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int x=128, y=32;
    x = x>>1;
    y = y<<2;
    printf("x = %d\ny = %d", x, y);
    return 0;
}