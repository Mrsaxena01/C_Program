/* 
   PROGRAM = write a program to convert temperature from Fahrenheit to Celsius?
   AUTHOR = Mr. Sonu
 */
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>
#include<conio.h>
int main()
{
    float Celsius, Fahrenheit;
    printf("Enter Fahrenheit value = ");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit-32)*5/9;
    printf("Celsius = %.0f", Celsius);
    return 0;
}
