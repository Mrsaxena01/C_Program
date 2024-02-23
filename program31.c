/* 
   PROGRAM = Write a program that accept the height of a person & determine whether he is a dwarf, average man,
             taller if he possesses an abnormal height?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int height;
    printf("Enter Height(in cm) = ");
    scanf("%d", &height);
    if (height<150)
    {
        printf("Dwarf Height");
    }
    else
    {
        if (height>=150&&height<165)
        {
            printf("Avg. Height");
        }
        else
        {
            if (height>=165&&height<195)
            {
                printf("Taller Height");
            }
            else
            {
                if (height>=195)
                {
                   printf("Abnormal Height");
                }
                
            }
            
        }
        
    }
    
    return 0;
}