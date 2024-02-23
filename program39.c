/* 
   PROGRAM = Write a program to swap  two number using function ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
void swap(int, int);
int main()
{
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    printf("Before swap :-\n");
    printf("a = %d\nb = %d\n", a, b);
    printf("After swap :-\n");
    swap(a, b);
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
    printf("a = %d\nb = %d", x, y);
}