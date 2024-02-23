/* 
   PROGRAM = Write a program to check whether the sum of angle is equal to 180 or not ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("Enter angle a = ");
    scanf("%d", &a);
     printf("Enter angle b = ");
    scanf("%d", &b);
     printf("Enter angle c = ");
    scanf("%d", &c);
    if (a+b+c == 180)
    {
       printf("Sum of angle is 180");
    }
    else
    {
        printf("Sum of angle is not 180");
    }
    
    return 0;
}