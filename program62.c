/* 
   PROGRAM = Write a program to find number of digit in given number ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter size of array = ");
    scanf("%d", &n);
    int array[n], i;
    printf("Enter array element :-\n");
    for (i=0; i<n; i++)
    {
        scanf("%d\n", &array[i]);
       // printf("\n");
    }
    for (i=0; i<n; i++)
    {
        printf("%d\n", array[i]);
    }
        
    return 0;
}