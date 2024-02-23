/* 
   PROGRAM = Ternery operator (conditional operator).
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    // TERNERY OPERATOR SYNTAX :-
    // CONDITION ?  IF STATEMENT : ELSE STATEMENT;
    (a>b) ? printf("a is greater") : printf("b is greater");
    return 0;
}