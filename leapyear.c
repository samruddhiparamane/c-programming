#include<stdio.h>
int main()
{
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0))
    printf("the year is leap year:%d\n",year);
    else
    printf("the year is not a leap year:%d\n",year);
    return 0;
}