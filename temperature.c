#include<stdio.h>
int main()
{
    float c,k,F;
    printf("enter a temperature in fahrenheit");
    scanf("%f",&F);
    c=5/9*(F-32);
    printf("temperature is in celcius is:%.2f",c);
    k=c+273.15;
    printf("temperature is in kelvin is:%.2f",k);
    return 0;
}

