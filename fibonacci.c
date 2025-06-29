#include<stdio.h>
int main()
{
    int n,i,c,a=0,b=1;
    printf("enter number");
    scanf("%d",&n);
    if(n==1)
    printf("%d",a);
    else if(n==2)
    printf("%d %d",a,b);
    else if(n>2)
    printf("%d %d",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    return 0;
}
}