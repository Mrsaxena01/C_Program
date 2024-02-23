/* 
   PROGRAM = Write a program to print pattern ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
int main()
{
    int n, i=1, j;
    printf("Enter Number = ");
    scanf("%d", &n);
    while (i<=n)
    {
        j=1;
        while (j<=n)
        {
            printf(" %d ", i);
            j++;
        }
        i++;
        printf("\n");
        
    }
    return 0;
}