/* 
   PROGRAM = Write a program to check whether input number is exactly divide by 2 & 3 ?
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
    if (num%2==0&&num%3==0)
    {
        printf("Number is exactly divide by 2 & 3");
    }
    else
    {
        printf("Number is not exactly divide by 2 & 3");
    }
    
    return 0;
}