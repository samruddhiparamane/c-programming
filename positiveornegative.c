#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>0)
    printf("the no is positive");
    else if(n<0)
    printf("the no is negative");
    else
    printf("the no is neither positive nor negative");
    
    return 0;

}