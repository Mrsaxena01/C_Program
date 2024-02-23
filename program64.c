/* 
   PROGRAM = Write a program to find number of digit in given number ?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>

int main()
{
   int i, position, value, array[4];
   printf("Enter 4 elements:-\n");
   for ( i = 0; i <=3; i++)
   {
   scanf("%d", &array[i]);
   }
   printf("insert position = ");
   scanf("%d", &position);
   printf("Enter value = ");
   scanf("%d", &value);
   for ( i = 0; i <=4 ; i++)
   {
    if (position == i-1)
    {
       array[i] = array[i-1];
        
    }
    
   }
       
    return 0;
}