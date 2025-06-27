#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%5==0 ||num%7==0)
    printf("the no is divisible by 5 or 7 ");
    else
    printf("the no is not divisible by 5 or 7");
    return 0;

}