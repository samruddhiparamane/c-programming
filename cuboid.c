#include<stdio.h>
int main()
{
    float l,b,h,surfacearea,volume;
    printf("enter a lenght,breadth abd height");
    scanf("%f%f%f",&l,&b,&h);
    surfacearea=2*(l*b+l*h+b*h);
    volume=l*b*h;
    printf("surfacearea of cuboid is %.2f:",surfacearea);
    printf("volume of cuboid is %.2f:",volume);
return 0;
}