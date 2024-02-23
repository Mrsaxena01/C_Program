/* 
   PROGRAM = write a program that accept any from the user and sum digit of the number?
   AUTHOR = Mr. Sonu
 */
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>
#include<conio.h>
int main()
{
    int num, sum = 0, rem;
    printf("Enter a number = ");
    scanf("%d", &num);
    while (num!=0)
    {
        rem = num %10;
        sum = sum +rem;
        num = num / 10;
    }
    printf("sum of digit of the number = %d", sum);
    return 0;
}