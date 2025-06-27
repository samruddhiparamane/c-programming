#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter three sides of triangle:");
    scanf("%d %d %d",&n1,&n2,&n3);
    if((n1+n2>n3)&&(n2+n3>n1)&&(n1+n3>n2))
    printf("triangle is valid.\n");
    else
    printf("triangle is not valid.\n");
    return 0;
}