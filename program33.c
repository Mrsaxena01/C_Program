/* 
   PROGRAM = Write a program of add, sub, mult, div?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, sum, sub, div, mult, n;
    printf("* * * * * * OPTIONS * * * * * *\n");
    printf("1. Add                          2. Sub\n");
    printf("3. Mult                         4. Div\n");
    printf("Enter your choice = ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter a = ");
        scanf("%d", &a);
        printf("Enter b = ");
        scanf("%d", &b);
        sum = a+b;
        printf("Sum = %d", sum);
        break;
    case 2:
        printf("Enter a = ");
        scanf("%d", &a);
        printf("Enter b = ");
        scanf("%d", &b);
        sub = a-b;
        printf("Sub = %d", sub);
        break;
    case 3:
        printf("Enter a = ");
        scanf("%d", &a);
        printf("Enter b = ");
        scanf("%d", &b);
        mult = a*b;
        printf("Mult = %d", mult);
        break;
    case 4:
        printf("Enter a = ");
        scanf("%d", &a);
        printf("Enter b = ");
        scanf("%d", &b);
        div = a/b;
        printf("Div = %d", div);
        break;                                           
    default:
        printf("Error ! Choose a valid options");
        break;
    }
    return 0;
}