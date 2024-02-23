/* 
   PROGRAM = If a 5 digit number is input through the keyword, write a program to print a new number
             by adding 2 each of its digit ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int num, a, newnum, sum=0;
    printf("Enter a 5 digits Number = ");
    scanf("%d", &num);
    if(num>=10000&&num<100000)
    {
    a = num/10000 + 2;
    newnum = num%10000;
    sum = sum + a*10000;

    a = newnum/1000 + 2;
    newnum = newnum%1000;
    sum = sum + a *1000;

    a = newnum/100 + 2;
    newnum = newnum%100;
    sum = sum + a * 100;

    a = newnum/10 + 2;
    newnum = newnum%10;
    sum = sum + a * 10;

    a = newnum + 2;
    sum = sum + a;

    printf("sum = %d", sum); 
    }
    else
    {
        printf("plz enter only 5 digit number");
    }
    return 0;
}