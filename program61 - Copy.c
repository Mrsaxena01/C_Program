#include<stdio.h>
//#include<conio.h>
int main()
{
    int n, sum=0;
    printf("n = ");
    scanf("%d", &n);
    while (n!=0)
    {
        n = n/10;
        sum = sum + 1;
    }
    printf("sum = %d", sum);
    return 0;
}