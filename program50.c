/* 
   PROGRAM = Write a program to generate ARMSTRONG number b/w 1 to 500 using while loop ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i = 1, a,b,c;
    while (i<=500)
    {
        a = i%10;
        b = i%100;
        b = (b-a)/10;
        c = i/100;
        if (i == (a*a*a)+(b*b*b)+(c*c*c))
        {
            printf("%d\t", i);
        }
        ++i; 
    }
    
    return 0;
}