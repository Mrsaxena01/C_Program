/* 
   PROGRAM = write a program in which input 2 number from the 
           user and swap the two number using two variable ?
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
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d\nb = %d", a, b);
    return 0;
}