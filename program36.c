/* 
   PROGRAM = Write a program that input a number b/w 1 to 7 and print day's name ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a Number b/w 1 to 7 = ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
      printf("Sunday");
      break;
    case 2:
      printf("Monday");
      break;
    case 3:
      printf("Tuesday");
      break;
    case 4:
      printf("Wednesday");
      break;    
    case 5:
      printf("Thursday");
      break;
    case 6:
      printf("Friday");
      break;
    case 7:
      printf("Saturday");
      break;    
    default:
      printf("Plz Enter a valid Number");
      break;
    }
    return 0;
}