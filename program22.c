/* 
   PROGRAM = WRITE A PROGRAM TO FIND OUT THE VALUE OF sinX cosX ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x, sinx, cosx;
    printf("Enter the value of angle = ");
    scanf("%f", &x);

    sinx = sin(x*(3.14/180.0));
    cosx = cos(x*(3.24/180.0));
    printf("sinX = %f\tcosX = %f", sinx, cosx);
    return 0;
}