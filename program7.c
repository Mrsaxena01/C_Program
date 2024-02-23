/* 
   PROGRAM = write a program in which input 5 subject marks from the user & if student get average marks less than 40 it will show 
             fail or above 40 it will show pass?
   AUTHOR = Mr. Sonu
 */
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>
#include<conio.h>
int main()
{
    float Hindi, Math, Science, Social_science, English;
    printf("Enter Hindi Mark = ");
    scanf("%f", &Hindi);
    printf("Enter Math Mark = ");
    scanf("%f", &Math);
    printf("Enter Science Mark = ");
    scanf("%f", &Science);
    printf("Enter Social_science Mark = ");
    scanf("%f", &Social_science);
    printf("Enter English Mark = ");
    scanf("%f", &English);
    if ((Hindi+Math+Science+Social_science+English)/5>=40)
    {
        printf("Your are pass");
    }
    else
    {
        printf("Your are Fail");
    }
    
    return 0;
}