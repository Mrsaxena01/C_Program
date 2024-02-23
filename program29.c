/* 
   PROGRAM = Write a program to find grade?
   AUTHOR = Mr. Sonu 
 */
// * * * * *S* * * *O* * * *N* * * *U* * * * * * * * * __________ * * * * * * * * * *S* * * *A* * * *X* * * *E* * * *N* * * *A* * * * * //
#include<stdio.h>
#include<conio.h>
int main()
{
    int mark;
    printf("Enter Total Marks = ");
    scanf("%d", &mark);
    if (mark<=40)
    {
      printf("Grade = Fail");
    }
    else
    {
      if (mark>40&&mark<=50)
      {
        printf("Grade = C");
      }
      else
      {
        if (mark>50&&mark<=60)  
        {
          printf("Grade = B");
        }
        else
        {
          if (mark>60&&mark<=70)
          {
            printf("Grade = A");
          }
          else
          {
            if (mark>70&&mark<=80)
            {
              printf("Grade = A+");
            }
            else
            {
              if (mark>80)
              {
                printf("Grade = A++");
              }
              
            }
            
          }
          
        }
        
      }
      
    }
    
    return 0;
}