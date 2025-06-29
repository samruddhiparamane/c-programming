#include<stdio.h>
int main()
{
   int i,x,y,result=1;
   printf("enter a number");
   scanf("%d",&x);
   printf("enter a power");
   scanf("%d",&y);
   i=1;
   while(i<=y)
   {
    result=result*x;
    i++;
   }
   printf("result is %d",result);
   return 0;

}