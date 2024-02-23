/* 
   PROGRAM = Write a program to check whether the input year is leap or not ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter year = ");
    scanf("%d", &year);
    if ((year%4==0)&&(year%100!=0)||(year%400==0))    
    {
        printf("Year is leap");
    }
    else
    {
        printf("Year is not leap");
    }
    
    return 0;
}