#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    if(i%2==0)
    printf("%d\n",i);
    return 0;
    
}