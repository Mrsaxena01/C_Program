/* 
   PROGRAM = write a program which input previous,current reading & rate per unit 
             of electricity consumption? calculate & print unit consumed & payable amount?
   AUTHOR = Mr. Sonu
 */
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>
#include<conio.h>
int main()
{
    int Current_reading, Previous_reading, Rate, Unit_consumed, Payable_amount;
    printf("Current_reading = ");
    scanf("%d", &Current_reading);
    printf("Previous_reading = ");
    scanf("%d", &Previous_reading);
    printf("Rate = ");
    scanf("%d", &Rate);
    Unit_consumed = Current_reading - Previous_reading;
    Payable_amount = Unit_consumed * Rate;
    printf("Unit_consumed = %d\nPayable_amount= %d", Unit_consumed, Payable_amount);
    return 0;
}