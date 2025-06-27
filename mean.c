#include<stdio.h>
int main()
{
    float a,b,arithmeticmean,harmonicmean;
    printf("enter two numbers");
    scanf("%f%f",&a,&b);
    arithmeticmean=(a+b)/2;
    harmonicmean=a*b/(a+b);
    printf("arithmetic mean is %.2f",arithmeticmean);
    printf("harmonic mean is %.2f:",harmonicmean);
return 0;
}