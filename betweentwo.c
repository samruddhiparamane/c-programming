#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b && a<c)||(a>c && a<b))
    printf("the first number is between to other two numbers:%d\n",a,b,c);
    else
    printf("the first number is not between to other two numbers:%d\n",a,b,c);
    return 0;
    


}