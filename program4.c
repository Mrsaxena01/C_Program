/* 
   PROGRAM = write a program to calculate simple interest?
   AUTHOR = Mr. Sonu
 */
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>
#include<conio.h>
int main()
{
    int Principle, Rate, Time, Simple_interest;
    printf("Enter Principle = ");
    scanf("%d", &Principle);
    printf("Enter Time(months) = ");
    scanf("%d", &Time);
    printf("Enter Rate = ");
    scanf("%d", &Rate);
    Simple_interest = (Principle*Time*Rate)/100;
    printf("Simple_interest = %d", Simple_interest);
    return 0;
}