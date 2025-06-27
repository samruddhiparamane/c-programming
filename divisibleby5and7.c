#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%5==0 && a%7==0)
    printf("the no is divisible by 5 and 7");
    else if(a%5==0 && a%7!=0)
    printf("the no is  divisible by 5 and  not divisible by 7");
    else if (a%5!=0 && a%7==0)
    printf("the no is not divisible by 5 and divisible by 7");
    else
    printf("the no is not divisible by 5 and 7");
    
    return 0;
}