/* 
   PROGRAM = write a program in which input 3 number from the 
           user and find greatest number between them?
   AUTHOR = Mr. Sonu
 */
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    printf("Enter c = ");
    scanf("%d", &c);
    if(a>b)
    {
       if(a>c)
       {
        printf("a is greater");
       }
       else
       {
        printf("c is greater");
       }
    }
    else
    {
        if (b>c)
        {
           printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    return 0;
}