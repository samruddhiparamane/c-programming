#include<stdio.h>
int main()
{
    int n ,i,cnt=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cnt++;
    }
    if(cnt==2)
    printf("prime number");
    else{
        printf("not prime number");
        }
        return 0;

    }
