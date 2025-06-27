#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    //using conditional operator
    if(a>=b &&a>=c)
    max=a;
    else if(b>=a && b>=c)
    max=b;
    else
    max=c;
printf("maximum using if_else:%d\n",max);


//using ternary operator
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("maximum using ternary operator:%d\n",max);

//minimum using ternary operator
min=(a<b)?((a<c)?a:c):((b<c)?b:c);
printf("minimum using ternary operator:%d\n",max);

return 0;
}




