/* 
   PROGRAM = write a program to check greatest number  ?
   AUTHOR = Mr. Sonu
 */
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    if (a>b)
    {
        printf("a is greater\n");
    }
    else
     if (a==b)
       {
        printf("a and b is equal\n");
       }
      else
       {
        printf("b is greater number\n");
       }    
    return 0;
}