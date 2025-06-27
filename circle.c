#include<stdio.h>
int main()
{
    float r,area,circumference;
    printf("enter a radius");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area of circle is %.2f:",area);
    circumference=2*3.14*r;
    printf("circumference of circle is %.2f:",circumference);
return 0;
}

