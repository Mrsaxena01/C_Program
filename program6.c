/* 
   PROGRAM = write a program in which input any number from user and check whether the number is even or odd number ?
   AUTHOR = Mr. Sonu
 */
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    printf("Enter any number = ");
    scanf("%d", &number);
    if (number%2==0)
      {
        printf("Number is even.");
      }
    else
      {
        printf("Number is odd.");
      }
     return 0;
}