#include<stdio.h>
int main()
{
    float r,h,surfacearea,volume;
    printf("enter radius and height");
    scanf("%f%f",&r,&h);
    surfacearea=2*3.14*r*r+2*3.14*r*h;
    printf("surfacearea of cylinder is:%.2f ",surfacearea);
    volume=3.14*r*r*h;
    printf("volume of cylinder is:%.2f",volume);
return 0;
}