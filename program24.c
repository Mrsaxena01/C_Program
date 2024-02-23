/* 
   PROGRAM = WRITE A PROGRAM TO CHECK WHETHER A PERSON IS ELIGIBLE TO VOTE OR NOT ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter your age = ");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("Person is eligible to vote");
    }
    else
    {
        printf("Person is not eligible to vote");
    }
    
    return 0;
}