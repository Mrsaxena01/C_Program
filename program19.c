/* 
   PROGRAM = BITWISE one's complement OPERATOR ?
   AUTHOR = Mr. Sonu 
   PROBLEM = sign operator
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, one_complement;
    printf("Enter any number = ");
    scanf("%d", &a);
    one_complement = ~a;
    printf("one's complement = %d", one_complement);
    return 0;
}