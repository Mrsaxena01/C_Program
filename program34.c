/* 
   PROGRAM = Write a program of add, sub, mult, div?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
void main()
{
    char s[100];
    int i;
    clrscr();
    printf("Enter your name : ");
    gets(s);
    for ( i = 1; i <= 20; i++)
    {
        textcolor(i);
        _cprintf("%s", s);
    }
 
    getch();
}