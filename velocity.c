#include<stdio.h>
int main()
{
    int u,a,t,finalvelocity,distance;
    printf("enter a velocity,acceleration and time");
    scanf("%d%d%d",&u,&a,&t);
    finalvelocity=u+a*t;
    distance=u+a*t*t;
    printf("finalvelocity is %d:",finalvelocity);
    printf("distance is %d:",distance);
return 0;

}