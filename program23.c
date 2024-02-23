/* 
   PROGRAM = WRITE A PROGRAM THAT ACCEPT TWO INTEGER NUMBER FROM THE USER & COMPUTE THEIR RATIO. IF THE RATIO IS GREATER THAN ZERO
             THEN "SWAP" THE TWO NUMBER USING TWO VARIABLES ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    float A, B, Ratio;
    printf("Enter the value of A = ");
    scanf("%f", &A);
    printf("Enter the value of B = ");
    scanf("%f", &B);
    Ratio = A/B;
    if (Ratio>=0)
    {
        A = A+B;
        B = A-B;
        A = A-B;
        printf("A = %0.1f\nB = %0.1f", A, B);
    }
    
    return 0;
}