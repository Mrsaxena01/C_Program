/* 
   PROGRAM = Find the value of x, y, z, a ? (arithmetic operator)
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    x = 3+4-7*8/5%10;
    printf("x = %d\n", x);

    int y;
    y = 2/2+2*6/2-2+3.5/3;
    printf("y = %d\n", y);

    int z;
    z = 5*1/2+3/2*2+5.5;
    printf("z = %d\n", z);

    int i=8, j=5, a;
    a = 2*((i/3)+4*(j-2));
    printf("a = %d\n", a);
    return 0;
}