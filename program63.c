/* 
   PROGRAM = Write a program to print element of an array in reverse order ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>

int main()
{
    int i, array[5];
    printf("Enter the elements\n");
    for ( i = 0; i<=4 ; i++)
    {
      scanf("%d", &array[i]);
    }
    printf("Elements are :-\n");
    for ( i = 0; i < 5; i++)
    {
      printf("%d\t\t", array[i]);
    }
    
    return 0;
}