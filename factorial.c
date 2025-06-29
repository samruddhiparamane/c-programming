#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter a number");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial of number is %d",fact);
    return 0;


}