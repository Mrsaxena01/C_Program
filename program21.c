/* 
   PROGRAM = SIMPLE CALCULATOR ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
int main()
{
    int a, b;
    char C;
    
    printf("Write any one operator('+', '-', '*', '/') = ");
    scanf("%c", &C);

    printf("Enter the value of a = ");
    scanf("%d", &a);

    printf("Enter the value of b = ");
    scanf("%d", &b);

    // switch condition

    switch (C)
    {
    case '+':
        printf("a + b = %d", a+b);
        break;

    case '-':
         printf("a - b = %d", a-b);
         break;

    case '*':
         printf("a * b = %d", a*b);
         break;

    case '/':
        printf("a / b = %d", a/b);
        break;
    
    default:
        printf("ERROR ! Please write a valid operator !");
    }
    return 0;
}