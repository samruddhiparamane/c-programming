#include<stdio.h>
#include<math.h>

int main()
{
    int n,temp,rem,cnt=0;
    float result=0;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;//store value of n
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    n=temp;
    while(n>0)
    {
        rem=n%10;
        result=result+pow(rem,cnt);
        n=n/10;
    }
    if(result==temp)
    printf("armstrong number");
    else
    printf("not an armstrong number");
    return 0;

}