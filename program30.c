/* 
   PROGRAM = Write a program if the number is even or odd, and then if it is even, whether it is 
             divisible by 4 or not, and if it is odd, whether it is divisible by 3 or not will be?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);
    if (num%2==0)
    {
        if (num%4==0)
        {
            printf("Number is even and divisible by 4");
        }
        else
        {
            printf("Number is even but not divisible by 4");
        }
    }
    else
    {
        if (num%3==0)
        {
            printf("Number is odd and divisible by 3");
        }
        else
        {
            printf("Number is odd but not divisible by 3");
        }
        
    }
    
    return 0;
}