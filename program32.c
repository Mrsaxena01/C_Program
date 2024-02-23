/* 
   PROGRAM = Write a program to calculate gross salary of an employee ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int bs, da, hra, gs;
    printf("Enter bs = ");
    scanf("%d", &bs);
    if (bs<=10000)
    {
      da = bs * 0.8;
      hra = bs * 0.2;
    }
    else
    {
      if (bs<=20000)
      {
        da = bs * 0.9;
        hra = bs * 0.25;
      }
      else
      {
        da = bs * 0.95;
        hra = bs * 0.3;
      }
      
    }
    gs = bs + da + hra;
    printf("Gross salary = %d", gs);  
    
    return 0;
}